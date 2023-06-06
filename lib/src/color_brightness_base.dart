// MIT License
//
// Copyright (c) 2023 Zaki Mubarok (kakzaki.dev)
import 'package:flutter/material.dart';

extension ColorBrightness on Color {
  Color darken([double percent = 10]) {
    assert(1 <= percent && percent <= 100);
    double x = 1 - percent / 100;
    return Color.fromARGB(
        alpha, (red * x).round(), (green * x).round(), (blue * x).round());
  }

  Color lighten([double percent = 10]) {
    assert(1 <= percent && percent <= 100);
    double x = percent / 100;
    return Color.fromARGB(alpha, red + ((255 - red) * x).round(),
        green + ((255 - green) * x).round(), blue + ((255 - blue) * x).round());
  }
}
