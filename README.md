# HIDROPONIA
Dispositivo del IoT . El shield es capaz de controlar en modo ON/OFF al menos 2 cargas para 12V DC. Además tiene la capacidad de recibir el input de un sensor de nivel de agua, de un sensor de humedad y sensor de flujo. 

Cargas-AC


Este dispositivo fue diseñado como proyecto final de curso aplicando IOT (Internet de las Cosas), donde podremos controlar en modo ON/OFF de 3 cargas AC, para poder ver el voltaje y corriente AC de una de las cargas mientras lo monitoreamos desde Arduino IoT Cloud para tener datos en tiempo real.

El dispositivo contiene:

ESP32
NeoPixeles
Buzzer
SHT30
Control de cargas AC
Pantalla OLED
¿Cómo funciona?
Funciona por medio de un microcontrolador ESP32 el cual posee conectividad WiFi y Bluetooth, el cual puede ser programado con difentes lenguajes de programación como C, C++ , en este caso se utilizó Arduino

¿Qué podemos hacer?
Desplegar la información por medio de la plataforma Arduino IoT Cloud usando conexión Wifi, donde podremos obtener la temperatura, el voltaje y corriente de las cargas que vayanis a conectar en nuestra PCB, desde la misma plataforma podremoos controlar las cargas AC utilizando sus Relay, por ello utilizando el buzzer y el Led NeoPixel que actuaran como indicadores para las aplicaciones.

Descripción de pines
Pantalla OLED SSD 1306, Temperatura y Humedad – Comunicación I2C
Referencia	SSD 1306	SHT30
ESP32	SCL IO22	SCL IO22
SCL IO23	SDA IO23
SSD 1306	SHT30
SCL IO22	SCL IO22
SDA IO23	SDA IO23
Control Cargas AC
Referencia	Carga 1	Carga 2	Carga 3
ESP32	IO25	IO26	IO27
LED Neopixel - Comunicación SPI
Referencia	WS2812B
ESP32	SD3
5V	VCC
GND	GND
Buzzer
Referencia	Buzzer
ESP32	IO5
Monitoreo Cargas AC
Referencia	SCT 013	Voltaje AC
ESP32	IO15	IO2
ADC2_2	ADC2_3
Licencia
Hardware License: CERN OHL v1.0 para más información visitar el siguiente Link.

Software License: GPL v3

Documentation License: CC BY 4.0 International
