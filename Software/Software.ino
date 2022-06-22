#include <Adafruit_NeoPixel.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH1106.h>

#define OLED_SDA 21
#define OLED_SCL 22

Adafruit_SH1106 display(21, 22);


int NUM_LEDS=1;
int PIN = 2;

Adafruit_NeoPixel pixels(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
  pixels.begin();
  pixels.clear();
  pinMode(4, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  display.begin(SH1106_SWITCHCAPVCC, 0x3C); 
  display.clearDisplay();

  //set the resolution to 12 bits (0-4096)
  analogReadResolution(12);
}

void loop() {
  // read the analog / millivolts value for pin 2:
  int Humedad = analogRead(12);
  int flujo = analogRead(13);
  int h=map(Humedad,0,4095,0,100);
  int n=map(flujo,0,4095,0,100);

  display.setTextSize(1.5);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("HIDROPONIA");
  display.println("RODRIGO MENDOZA");
  display.println("CATHERINE BATRES");
  display.println("");
  
  display.print("Humedad = ");
  display.print(h);
  display.println("%");
  display.print("Nivel = ");
  display.print(n);
  display.println("%");
  display.display();

  if(n> 50){
    pixels.setPixelColor(0, pixels.Color(0, 255, 0));
    pixels.show();
  }else{
    pixels.setPixelColor(0, pixels.Color(255, 0, 0));
  pixels.show();
    }

   if(h> 65){
    digitalWrite(4, HIGH);
  }else{
    digitalWrite(4, LOW);
    }
  
  // print out the values you read:
  Serial.print("Humedad = ");
  Serial.print(h);
  Serial.println("%");
  Serial.print("Nivel = ");
  Serial.print(n);
  Serial.println("%");
  
  delay(2000);
  display.clearDisplay();
}
