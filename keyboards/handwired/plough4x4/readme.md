# handwired/plough4x4

![handwired/plough4x4](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [Robbin Ploeger](https://github.com/robbplo)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make handwired/plough4x4:default

Flashing example for this keyboard:

    make handwired/plough4x4:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## GP Pins per key

```

Keys
[
  [6, 7, 8, m],
  [9, b, l, k],
  [a, d, j, i],
  [e, f, g, h]
]

Pins
[
  [6, 7, 8, 22],
  [9, 11, 21, 20],
  [12, 13, 19, 18],
  [14, 15, 16, 17]
]
```

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
