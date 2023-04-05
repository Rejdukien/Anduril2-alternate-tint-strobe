# Toykeeper's Anduril2 fork
Based on Anduril2 Revision 657

Features:
- Added alternating tint on party/tactical strobe via 3C press during strobe  
- Tintramp twice as fast
- blink mid tintramp (configurable in hank-cfg.h)  
- User-configurable startup-mode, see description below

# How to build it myself?
Either use Linux or a Linux VM - WSL counts for this purpose.  
```sh
sudo apt-get install gcc-avr avr-libc  
cd spaghetti-monster/anduril  
./build-all.sh *keyword*  
```

Replace "*keyword*" with the name of your flashlight model, see available configuration files for this.  
For example, to build all d4sv2 hex files:  
```sh
./build-all.sh d4sv2
```  

Flash as you normally would, see other resources on the internet for this.  


# Feature: Start Up Mode

Copied from [starryalley's Anduril2 fork](https://github.com/starryalley/Anduril2).  
Original description:

Idea from [this post](https://www.reddit.com/r/flashlight/comments/w417mx/anduril_mode_to_ramp_on_for_05_seconds_or_so/).


When doing 1-click from off to turn on the light, there are additionally 3 modes that can be selected through Misc Config Menu (`9H` from off).

- Mode 0: instant on (default)
- Mode 1: quickly ramp up to memorized level
- Mode 2: old fluorescent light flickering
- Mode 3: lighter flickering and slowly ramp up

See [this youtube video](https://www.youtube.com/watch?v=uP6s6mgOBio) for demo.

The Misc Config menu has the following items:
- `USE_TINT_RAMPING` (if enabled) is the first item (for tint ramping lights)
- `USE_JUMP_START` (if enabled) is the second item (for lights with jump start enabled)
- This Start up mode is the third item

Based on different light's config this can be 1st, 2nd or 3rd item in the menu. For D4v2/D4sv2 it is the third, for D4v2/DW4 single channel it's the second. For SP10 pro and TS10 it's the first and only item.