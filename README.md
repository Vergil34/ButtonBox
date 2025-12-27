# ButtonBox
Hack Club Blueprint Starter Project. This is my first time really working in depth with making a pcb or CADing something to actually make it in real life, so it was definitely a fun experience. I plan to use this as a small button box for sim racing, but it can probably be easily reprogrammed to be a regular macro pad.

## Features:
- 3D printed case. I did something pretty simple since I'm new to cadding
- 128x32 OLED Display, because why not?
- 2 SK6812 MINI-E LEDs just for some lights
- 4 keys

## CAD
Held together with 4 M3x16mm screws, the pcb doesnt have too much space to move around, so I didnt mount it with a screw. 2 pieces for the print, top cover, and bottom holder.

IMAGE HERE

Used Fusion 360, hooray for school accounts

## PCB
Used KICAD, and wasnt as complicated as I thought it was gonna be originally.

Schematic:
IMAGE HERE

PCB
IMAGE HERE

## Firmware

I used KMK for everything. I was originally planning to do QMK, but I felt like it would take too long to get the custom profile approved (Im doing this way too late)

-OLED screen will display date and time, a small clock wouldn't be a bad addition to my setup
-4 Keys that will be bound to a key on my regular keyboard and then be used to turn things like the headlights of a car, or if iwant to turn onthe wipers, etc. Can be very easily changed by programming

##BOM: 
The parts needed:
- 4x Cherry MX-Switches
- 4x DSA Keycaps
- 1x 0.91" 128x32 OLED Display
- 1x XIAO RP2040
- 1x Case (2 printed parts)
- 4x M3x5mx4mm heatset inserts
- 4x M3x16mm screws

##Extra Stuff
I'm not sure where I was supposed to put this, but I do need a soldering kit. Thanks!

