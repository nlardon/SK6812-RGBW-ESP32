#include <sk.h> //source : gitpeut/SK6812-RGBW-ESP32

sk strip; //Create an object to manipulate leds SK6812-RGBW
int led_count = 5; //Define the number of leds
int led_pin = 4; //Set the data pin

void setup()
{
  strip.begin(led_pin, led_count); //Initialize the strip
  strip.clear(); //Set to off all leds
  delay(100);
}


void loop()
{
  strip.clear(); //Set to off all leds

  strip.color(0,255,0,0,0); //Switch on the red on first led
  strip.show(); //send the order to the leds
  delay(1000);

  strip.color(0,255,0,0,0); //Switch on the red on first led
  strip.color(1,0,255,0,0);
  strip.color(2,0,0,255,0);
  strip.color(3,0,0,0,255);
  strip.color(4,255,255,255,255);
  strip.show(); //send the order to the leds
  delay(1000);


  //Swith on full RGBW (0-255) of all leds
  for (int i=0;i<led_count;i++){
    strip.color(i,255,255,255,255);
  }
  strip.show();
  delay(1000);

  //Swith on red of all leds
  for (int i=0;i<led_count;i++){
    strip.color(i,255,0,0,0);
  }
  strip.show();
  delay(1000);

}

