import 'package:flutter/material.dart';
import 'package:color_brightness/color_brightness.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatefulWidget {
  const MyApp({super.key});

  @override
  State<MyApp> createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
  @override
  void initState() {
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: const Text('Plugin example app'),
        ),
        body: Center(
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.center,
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
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
            ],
          ),
        ),
      ),
    );
  }
}
