/**
 * @file
 * JS Implementation of OpenLayers behavior.
 */

/**
 * Layer Switcher Behavior
 */
Drupal.openlayers.addBehavior('hr_bundles_behavior_layerswitcherradio', function (data, options) {
  options.ascending = !! options.ascending;

  if (options.div) {
    options.div = OpenLayers.Util.getElement(options.div);
  } else {
    // make sure div is set to null so openlayers knows to generate its own id
    if (typeof options.div !== "undefined") {
      delete options.div;
    }
  }
  
  Drupal.openlayers.addControl(data.openlayers, 'LayerSwitcherRadio', options);

  // Maximize if needed.
  if (!! options.maximizeDefault == true) {
    data.openlayers.getControlsByClass('OpenLayers.Control.LayerSwitcherRadio')[0].maximizeControl();
  }
});
