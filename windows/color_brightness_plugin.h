#ifndef FLUTTER_PLUGIN_COLOR_BRIGHTNESS_PLUGIN_H_
#define FLUTTER_PLUGIN_COLOR_BRIGHTNESS_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace color_brightness {

class ColorBrightnessPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  ColorBrightnessPlugin();

  virtual ~ColorBrightnessPlugin();

  // Disallow copy and assign.
  ColorBrightnessPlugin(const ColorBrightnessPlugin&) = delete;
  ColorBrightnessPlugin& operator=(const ColorBrightnessPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace color_brightness

#endif  // FLUTTER_PLUGIN_COLOR_BRIGHTNESS_PLUGIN_H_
