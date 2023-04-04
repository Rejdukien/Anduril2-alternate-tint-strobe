# Toykeeper's Anduril2 fork
Based on Anduril2 Revision 657  
Added alternating tint on party/tactical strobe via 3C press during strobe

# How to build it myself?
Either use Linux or a Linux VM - WSL counts for this purpose.  
> sudo apt-get install gcc-avr avr-libc  
> cd spaghetti-monster/anduril  
> ./build-all.sh *keyword*  


Replace "*keyword*" with the name of your flashlight model, see available configuration files for this.  
For example, to build all d4sv2 hex files:  
> ./build-all.sh d4sv2  

Flash as you normally would, see other resources on the internet for this.  
