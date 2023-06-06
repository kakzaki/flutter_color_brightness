//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <color_brightness/color_brightness_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) color_brightness_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "ColorBrightnessPlugin");
  color_brightness_plugin_register_with_registrar(color_brightness_registrar);
}
