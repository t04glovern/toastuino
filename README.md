<img src="https://raw.github.com/t04glovern/toastuino/master/img/project-banner.jpg" data-canonical-src="https://raw.github.com/t04glovern/toastuino/master/img/project-banner.jpg" align="center"/>

<div align = "center">
    <h1><em>Toastuino</em></h1>
    <p>Toaster Stationary box for the masses.</p>
    <a href="https://manparvesh.mit-license.org/" target="_blank"><img src="https://img.shields.io/badge/license-MIT-blue.svg" alt="License"></a>
    <a href="https://www.arduino.cc/" target="_blank"><img src="https://img.shields.io/badge/Platform-Arduino-blue.svg" alt="License"></a>
    <a href="https://travis-ci.org/t04glovern/toastuino" target="_blank"><img src="https://travis-ci.org/t04glovern/toastuino.svg?branch=master" alt="Build Status"></a>
</div>

## Setup

### Hardware

* 1x - [IMK 2 Slice Toaster](https://www.spotlightstores.com/kitchen-dining/kitchen-appliances/toasters/imk-2-slice-toaster/p/BP80271373) : $9.95
* 1x - [Nano CH340/ATmega328P](https://www.aliexpress.com/item/Nano-CH340-ATmega328P-MicroUSB-Compatible-for-Arduino-Nano-V3/32572612009.html) : $2.49
* 16x - Red, Blue, Green, Yellow LEDs

## Platform IO

This project is build and run with PlatformIO. The library dependencies can be found in the `platformio.ini` file. Below is the current configuration targetting the Arduino Uno board. This can be changed to any variable of the Atmel AVR range.

```ini
[env:nanoatmega328]
platform = atmelavr
board = nanoatmega328
framework = arduino
```

## Audio Encoding

The audio clip within the `/audio` directory is used in `main.h`. This byte stream cannot exceed the Program Memory size of the microcontroller you have chosen to use.

The tutorial on setting up the audio clip for encoding can be founds here: [http://highlowtech.org/?p=1963](http://highlowtech.org/?p=1963). It's important to note that you need a WAV/MP3 with a `sample rate of 8Khz` and a `bit rate of 16Khz`.

There's a copy of the `EncodeAudio.exe` binary in the `/audio` directory also incase the site mirror goes down.