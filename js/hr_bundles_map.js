(function($) {
  $(document).ready(function() {

    var baseurl = window.location.protocol + '//' + window.location.host + '/';
    var themeurl = baseurl + 'sites/all/themes/humanitarianresponse/';
    var iconsurl = themeurl + 'assets/images/icons/75/Clusters/';

    //Icons data
    var iconname = new Array();
    var iconext = ".png";
    iconname[1] = "CM" + iconext;
    iconname[2] = "ER" + iconext;
    iconname[3] = "E" + iconext;
    iconname[4] = "ES" + iconext;
    iconname[5] = "ET" + iconext;
    iconname[6] = "FS" + iconext;
    iconname[7] = "H" + iconext;
    iconname[8] = "L" + iconext;
    iconname[9] = "N" + iconext;
    iconname[10] = "P" + iconext;
    iconname[5403] = "CP" + iconext;
    iconname[5404] = "GBV" + iconext;
    iconname[5405] = "HLP" + iconext;
    iconname[5406] = "MA" + iconext;
    iconname[11] = "W" + iconext;

    //Aor data (aor[id] = parent)
    var aor = new Array();
    aor[5403] = "10";
    aor[5404] = "10";
    aor[5405] = "10";
    aor[5406] = "10";

    function updateMap() {

      var filters = new Array();
      if($("#global-clusters .icon.active").length == 1) {
        filters.push("filter[global_cluster]=" + $("#global-clusters .icon.active").attr('cluster-id'));
      }


      if($("#types .type.active").length == 0) {
        var activeTypes = $("#types .type");
      } else {
        var activeTypes = $("#types .type.active");
      }

      var urls = new Array();
      $.each(activeTypes, function() {
        urls.push(baseurl + "api/v1.0/bundles?filter[type]=" + $(this).attr('type-id') + "&" + filters.join("&"));
      });

      var countriesMap = new Array();
      $.each(urls, function(i, url) {

        // Get Data
        $.ajax({
          url: url,
          async:false
        })
        .done(function(data) {

          var search = data.data;

          // Pager loop
          while(data.next) {
            delete data; // Reset data
            $.ajax({
              url: data.next.href,
              async:false
            })
            .done(function(dataPager) {
              data = dataPager;
              search = search.concat(data.data);
            });
          }

          $.each(search, function(i, result) {

            if(result.operation != null) {
              result.operation[0].clustername = result.label + " (" + result.operation[0].label + ")";
            } else {
              return true;
            }

            //Lead agencies
            if(result.lead_agencies != null) {
              result.operation[0].lead_agencies = "<br/>Lead agencies: ";
              $.each(result.lead_agencies, function(i, val) {
                if(i > 0) { result.operation[0].lead_agencies+= ", "; }
                result.operation[0].lead_agencies+= val.label + " ";
              });
            } else {
              result.operation[0].lead_agencies = "";
            }
            //Co-leads
            if(result.partners != null) {
              result.operation[0].partners = "<br/>Co-leads: ";
              $.each(result.partners, function(i, val) {
                if(i > 0) { result.operation[0].partners+= ", "; }
                result.operation[0].partners+= val.label + " ";
              });
            } else {
              result.operation[0].partners = "";
            }
            //Activation document
            if(result.activation_document != null) {
              result.operation[0].activation_document = "<br/>Activation documents: ";
              $.each(result.activation_document, function(i, val) {
                if(i > 0) { result.operation[0].activation_document+= ", "; }
                result.operation[0].activation_document+= val.label + " ";
              });
            } else {
              result.operation[0].activation_document = "";
            }
            //Cluster coordinators
            if(result.cluster_coordinators != null) {
              console.log(result);
              result.operation[0].cluster_coordinators = "<br/>Cluster coordinators: ";
              $.each(result.cluster_coordinators, function(i, val) {
                if(i > 0) { result.operation[0].cluster_coordinators+= ", "; }
                result.operation[0].cluster_coordinators+= val.label + " ";
              });
            } else {
              result.operation[0].cluster_coordinators = "";
            }

            //Color
            if(result.type == "cluster") {
              result.operation[0].color = '#cd8064';
            }

            countriesMap = countriesMap.concat(result.operation);
          });
        });

      });


      $(countriesMap).each(function(i) {
      // console.log(countriesMap[i]);
        // Set country code
        if(countriesMap[i].country != null) {
          countriesMap[i].mapCode = countriesMap[i].country.pcode;
        }

        //Click on country
        countriesMap[i].events = {
            click: function(e){
                window.location.href = countriesMap[i].homepage;
            }
        };
      });

      // Initiate the chart
      $('#clusters-map').highcharts('Map', {
        colors: ['#BC2E3B'],
        chart : {
          backgroundColor : '#E0ECED',
          borderRadius: 0,
          events: {
            load: function() {
              $("#clusters-map").removeClass('loading');
            }
          }
        },
        title : {
          text : ''
        },
        legend: {
          enabled: false
        },
        plotOptions: {
          map: {
            joinBy: ['iso-a2', 'mapCode'],
            dataLabels: {
              enabled: true,
              format: '{point.label}'
            },
            mapData: Highcharts.maps['custom/world'],
            tooltip: {
              headerFormat: '',
              pointFormat: '<b>{point.clustername}</b>{point.lead_agencies}{point.partners}{point.activation_document}{point.cluster_coordinators}'
            }

          }
        },
        series : [{
          data : countriesMap,
          name: ' ',
          // color: '#FFFF00',
          states: {
            hover: {
              color: '#DD5763'
            }
          }
        }]
      });
    }

    //Define click action
    $("#global-clusters").on("mousedown", ".icon", function() {
      $("#clusters-map").addClass('loading');
    }).on("click", ".icon", function() {
      $(".icon.active").removeClass('active');
      $(this).addClass('active');
      updateMap();
    });
    $("#types").on("mousedown", ".type", function() {
      $("#clusters-map").addClass('loading');
    }).on("click", ".type", function() {
      $(this).toggleClass('active');
      updateMap();
    });

    //Get Icon list
    $.getJSON(baseurl + 'api/v1.0/global_clusters', function(data) {
      var global_clusters = data.data;
      $.each(global_clusters, function(i, global_cluster) { // Render Parent Cluster
        if(typeof aor[global_cluster.id] == "undefined") {
          $("#global-clusters").append('<div id="cluster-' + global_cluster.id + '" cluster-id="' + global_cluster.id + '" class="icon"><img src="' + iconsurl + iconname[global_cluster.id] + '" alt="' + global_cluster.label + '"/></div>');
        }
      });

      for(var i in aor) {
        if($("#cluster-" + aor[i] + "-aor").length == 0) {
          $("#cluster-" + aor[i]).after('<div id="cluster-' + aor[i] + '-aor" class="sub-icons"></div>');
        }
        $("#cluster-" + aor[i] + "-aor").append('<div id="cluster-' + i + '" cluster-id="' + i + '" class="icon"><img src="' + iconsurl + iconname[i] + '"/></div>')
      }
      $("#global-clusters .icon:first").trigger("click");
    });

  });
})(jQuery);
