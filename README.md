# HIDROPONIA


![image](https://user-images.githubusercontent.com/68393777/172915791-3206a361-0881-4b04-9cbe-e16f91586fb2.png)



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
| ESP32        |    IO5  | 
|    5V    |  VBUS |
|     GND      |    GND   | 

### Sensor Humedad Suelo 
| Referencia   |          | 
| :---         |   :---:  |  
| ESP32        |    IO12  | 
|    5V    |  VBUS |
|     GND      |    GND   | 

### Sensor Flujo de Agua
| Referencia   |          | 
| :---         |   :---:  |  
| ESP32        |    IO13  | 
|    5V    |  VBUS |
|     GND      |    GND   | 

#Finalidad
El dispositivo IoT busca proporcionar al usuario un sistema de Hidroponía el cual pueda recopilar datos por medio de sensores sin necesidad de la interacción humana. El dueño del dispositivo tendrá acceso a la información sintetizada en su celular. 

# Licencia
Hardware License: CERN OHL v1.0 para más información visitar el siguiente [Link.](https://ohwr.org/project/cernohl/wikis/Documents/CERN-OHL-version-1.2)

Software License: GPL v3

Documentation License: CC BY 4.0 International

# OSHWA certification
Nombre del proyecto: Hidroponía https://certification.oshwa.org/list.html

![image](https://user-images.githubusercontent.com/68393777/172915957-5cc7b7a1-707c-45e9-ab2c-dc7d5b201ed2.png)


