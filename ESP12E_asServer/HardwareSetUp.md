# ESP12E is programmed using arduino IDE via ArduinoNano board as the serial USB interface.

connections during programming
1) ESP RX --- Arduino RX
2) ESP TX --- Arduino TX
3) ESP GND ---- Arduino GND
4) ESP Enable ---- Vcc 3.3V
5) ESP IO15 --- GND
#6) ESP GPIO0 --- GND

After programming/flashing
1) ESP RST --- Momentarily connect to GND

Connections during RUN
1) ESP RX --- Arduino RX
2) ESP TX --- Arduino TX
3) ESP GND ---- Arduino GND
4) ESP Enable ---- Vcc 3.3V
5) ESP IO15 --- GND
#6) ESP GPIO0 --- Floating 


