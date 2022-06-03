# HIDROPONIA

![image](https://user-images.githubusercontent.com/68393777/171799841-9e5a68ac-0bc7-47e4-bf48-9994fa5aec52.png)
![image](https://user-images.githubusercontent.com/68393777/171799868-ca491176-1f67-48d5-b85a-e81398ebf363.png)

Dispositivo del IoT . El shield es capaz de controlar en modo ON/OFF al menos 2 cargas para 12V DC. Además tiene la capacidad de recibir el input de un sensor de nivel de agua, de un sensor de humedad y sensor de flujo. 

# Descripción de pines 

### Pantalla OLED SSD 1306, Temperatura y Humedad – Comunicación I2C

| Referencia   | SSD 1306 | SHT30 |
| :---         |    :---: |    ---:  |
| ESP32        | SCL IO22 | SCL IO22 |
|              | SCL IO23 | SDA IO23 |


| SSD 1306 | SHT30 |
| -------- | ----- |
| SCL IO22 | SCL IO22 |
| SDA IO23 | SDA IO23 |


### Control Cargas AC 

| Referencia   | Carga 1 | Carga 2 | Carga 3 |
| :---         |    :---:|    ---: | ---:    |
| ESP32        |  IO25   |  IO26   |   IO27  |


### LED Neopixel - Comunicación SPI

| Referencia | WS2812B |
| -------- | ----- |
|  ESP32   |  SD3  |
|    5V    |  VCC  |
|   GND    |  GND  |

### Buzzer 

| Referencia   |  Buzzer | 
| :---         |   :---: |
| ESP32        |    IO5  |        

### Monitoreo Cargas AC 

| Referencia   | SCT 013  | Voltaje AC | 
| :---         |   :---:  |  ---:      |
| ESP32        |    IO15  |    IO2     |
|              |   ADC2_2 | ADC2_3     |


# Licencia
Hardware License: CERN OHL v1.0 para más información visitar el siguiente [Link.](https://ohwr.org/project/cernohl/wikis/Documents/CERN-OHL-version-1.2)

Software License: GPL v3

Documentation License: CC BY 4.0 International
