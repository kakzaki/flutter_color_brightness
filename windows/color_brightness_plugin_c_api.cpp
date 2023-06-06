#include "include/color_brightness/color_brightness_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "color_brightness_plugin.h"

void ColorBrightnessPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  color_brightness::ColorBrightnessPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
