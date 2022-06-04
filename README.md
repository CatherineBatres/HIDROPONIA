# HIDROPONIA


![image](https://user-images.githubusercontent.com/68393777/171800489-6ebd88d2-d5e2-44ba-8a83-f5459466abc7.png)


Dispositivo IoT cuyo shield es capaz de controlar en modo ON/OFF al menos 2 cargas para 12V DC. Además tiene la capacidad de recibir el input de un sensor de nivel de agua, de un sensor de humedad y sensor de flujo. 


Sensores y componentes electrónicos:

-ESP32
-Sensor de humedad
-Sensor de nivel del agua
-Sensor medidor de flujo
-Pantalla OLED
-Buzzer
-NeoPixeles
-Sensor SHT30
-Relés

# Funcionamiento

Sensores controlados por medio de la tarjeta ESP32 Wrover programada a través del IDE de Arduino y esta se alimenta de una fuente de 5V. 
Cada uno de los sensores utilizados activan y controlan otros componentes electrónicos como el buzzer y los neopixels dependiendo de la indormación adquirida. 
Además, la data proporcionada por el shield y los sensores contenidos en él son mostrados a través de una applicación con una comunicación MQTT. 


# Descripción de pines 

### Pantalla OLED SSD 1306, Temperatura y Humedad – Comunicación I2C

| Referencia   |  SH1106  | SHT30 |
| :---         |    :---: |    ---:  |
| ESP32        | SCL CLK  | SCL CLK  |
|              | SDA SD1  | SDA SD0  |


### Control Cargas 

| Referencia   | Carga 1 | Carga 2 | 
| :---         |    :---:|    ---: |
| ESP32        |  IO14   |  IO15   | 


### LED Neopixel 1

| Referencia | WS2812B |
| -------- | ----- |
|  ESP32   |  IO2  |
|    5V    |  VBUS |
|   GND    |  GND  |

### LED Neopixel 2

| Referencia | WS2812B |
| -------- | ----- |
|  ESP32   |  SD2  |
|    5V    |  VBUS |
|   GND    |  GND  |

### Buzzer 

| Referencia   |  Buzzer | 
| :---         |   :---: |
| ESP32        |    IO4  |        

### Sensor nivel de agua 
| Referencia   |          | 
| :---         |   :---:  |  
| ESP32        |    IO15  |  
|     GND      |    GND   | 

#Finalidad
El dispositivo IoT busca proporcionar al usuario un sistema de Hidroponía el cual pueda recopilar datos por medio de sensores sin necesidad de la interacción humana. El dueño del dispositivo tendrá acceso a la información sintetizada en su celular. 

# Licencia
Hardware License: CERN OHL v1.0 para más información visitar el siguiente [Link.](https://ohwr.org/project/cernohl/wikis/Documents/CERN-OHL-version-1.2)

Software License: GPL v3

Documentation License: CC BY 4.0 International
