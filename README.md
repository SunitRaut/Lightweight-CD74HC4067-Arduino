# A Lightweight Library for CD74HC4067 - Arduino
[![GitHub release](https://img.shields.io/github/release/SunitRaut/Heatmap-Visualization-JS.svg)](https://github.com/SunitRaut/Heatmap-Visualization-JS)
[![license](https://img.shields.io/github/license/SunitRaut/Heatmap-Visualization-JS.svg)](https://github.com/SunitRaut/Heatmap-Visualization-JS/blob/main/LICENSE)
[![DOI](https://zenodo.org/badge/DOI/10.5281/zenodo.4451603.svg)](https://doi.org/10.5281/zenodo.4451603)

A lightweight, low memory consuming CD74HC4067 Library for Arduino IDE based microcontrollers

## Features
- Lightweight
- Consumes much less memory (RAM) compared to other CD74HC4067 libraries
- Easy to use

## How to Use Library

Include the library in sketch
```
#include <light_CD74HC4067.h>
```
Create a new CD74HC4067 object, specifying the select pins, s0 s1, s2, s3.
```
CD74HC4067 mux(4, 5, 6, 7); // mux(s0,s1,s2,s3), where s3 is the highest select line (MSB)
```
Set the channel using the channel() method
```
mux.channel(8);    // Enter channel numbers from 0 - 15
```

Here is an [instructable with simple example](https://www.instructables.com/Arduino-Interfacing-With-CD74HC4067-16-channel-MUX/)
