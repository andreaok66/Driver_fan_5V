# Driver_fan_5V
With this project I built a small automated cooling system to keep the board CPU temperature below a certain threshold (safety threshold). This change has brought significant advantages in terms of safety to avoid damage due to excessive temperature rise of the device. Not a necessary upgrade but highly recommended.
(Obviously, before resorting to this solution it is also possible to apply some easy to mount heat sinks to obtain a small temperature drop)

Components:
- RaspberryPI/OrangePI or similar ...
- Small fan 5V
- BJT Transistor (NPN 2N2222)
- Resistance
- SStripboard, welder, cables, and so on ...

First of all I monitored the temperatures of the device when it is unused and when it is fully operational. I chose an average temperature as a treshold above which to start the fan.
I chose to monitor the temperature vis SW through a system call carried out by a bash script. This script will be called periodically via crontab.
When the fan needs to be turned on, a high signal is sent to a GPIO output. Since the fan works at 5V and the 3.3V GPIO, it is necessary to use a transistor as a switch. The GPIO in fact activates the transistor that allows the connection between the fan and the 5V (the power is taken from the board since the load is low)
Finally, the circuit is welded and fixed on the suitably perforated case (to take fresh air), and the whole is closed by positioning the fan in the direction of the CPU.
