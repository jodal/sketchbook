Blinking LED with Go
====================

A Go program that use the Firmata sketch and Firmata protocol to control the
Arduino over the USB cable. It makes LED 13 blink.

Setup
-----

- USB connected to computer.

- Firmata sketch uploaded to Arduino using Gort:

  ```
  go get github.com/hybridgroup/gort
  gort arduino upload firmata /dev/ttyACM0
  ```

- Run Go control program:

  ```
  go install github.com/jodal/sketchbook/goblink
  goblink
  ```
