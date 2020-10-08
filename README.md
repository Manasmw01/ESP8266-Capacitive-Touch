# ESP8266-Capacitive-Touch
>Analog pin A0 of ESP8266 NodeMCU can be used for Capacitive touch sensing.
>Aluminium foil can be used as electrodes for touch sensing.
>Place the electrodes in this shape and connect a single stranded wire to them.

<p align="center">
<img align="center" width="200" height="268" src="https://github.com/Manasmw01/ESP8266-Capacitive-Touch/blob/main/Electrodes.jpeg">
</p>

>Connect one terminal to the A0 pin and other terminal to 3V3 pin of ESP8266 NodeMCU
>
>Now upload this 
>[Sketch](https://github.com/Manasmw01/ESP8266-Capacitive-Touch/blob/main/Analog%20Readings.ino)
>using 
>[Arduino IDE](https://www.arduino.cc/en/Main/Software)
>And observe the readings on the Serial Monitor(When touched and when open)
>
>[Refer this to Install boards and drivers](https://www.instructables.com/Get-Started-With-NodeMCU/)

* * *
# When open:
>
<p align="center">
  <img src="https://github.com/Manasmw01/ESP8266-Capacitive-Touch/blob/main/Open.gif">
</p>

 * * *
 # When Touched:
 >
<p align="center">
  <img src="https://github.com/Manasmw01/ESP8266-Capacitive-Touch/blob/main/Touched.gif">
</p>

* * * 

>When touched, the value ranges around 60 to 90.
>The given code will turn on the LED when the values ranges between 50 to 100.
>Update the program according to your values.
>Now re-upload this 
>[Code](https://github.com/Manasmw01/ESP8266-Capacitive-Touch/blob/main/Touch_Sensor_with_LED.ino)
>

<p align="center">
  <img src="https://github.com/Manasmw01/ESP8266-Capacitive-Touch/blob/main/Touch_Sensor_LED.gif">
</p>

* * *
# Bingo!!
Try the same code on ESP32 which has 10 capacitive touch pins.
