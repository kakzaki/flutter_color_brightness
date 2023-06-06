# Color Brightness Flutter Plugin

A Flutter plugin that provides functionality to darken or lighten colors.
[![pub package](https://img.shields.io/pub/v/color_brightness.svg)](https://pub.dev/packages/color_brightness)
[![pub package](https://img.shields.io/twitter/follow/kakzaki_id.svg?colorA=1da1f2&colorB=&label=Follow%20on%20Twitter)](https://twitter.com/kakzaki_id)


## Getting Started

To use this plugin, add `color_brightness` as a dependency in your pubspec.yaml file.

```yaml
dependencies:
  flutter:
    sdk: flutter
  color_brightness: ^1.0.0
```

### Importing the package

```dart
import 'package:color_brightness/color_brightness.dart';
```

### Usage

```dart
//normal
Container(
  height: 100,
  width: 100,
  color: Colors.red,
),

//darken
Container(
  height: 100,
  width: 100,
  color: Colors.red.darken(50),
),

//lighten
Container(
  height: 100,
  width: 100,
  color: Colors.red.lighten(50),
),
```

In the above example, we import the `color_brightness` package and use the `darken()` and `lighten()` methods on the `Colors` class to modify the brightness of a color. The `darken()` method takes a percentage value as an argument to darken the color, while the `lighten()` method takes a percentage value to lighten the color.

Make sure to replace `^1.0.0` with the latest version of the `color_brightness` plugin. You can find the latest version on the [pub.dev](https://pub.dev/packages/color_brightness) page.