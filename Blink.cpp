/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>
#include <SoftwareSerial.h>





const int ledPin = 13;// We will use the internal LED
const int buttonPin = 8;// the pin our push button is on

void setup()
{  

   
  pinMode(buttonPin,INPUT_PULLUP); // Set the Tilt Switch as an input

}

void loop()

{

  int digitalVal = digitalRead(buttonPin); // Take a reading
  


  delay(100);

  if(HIGH == digitalVal)
  {
   
    digitalWrite(ledPin,LOW); //Turn the LED off

  }
  else
  {
    digitalWrite(ledPin,HIGH);//Turn the LED on
      delay(1000);
    digitalWrite(ledPin,LOW);//Turn the LED off
    delay(1000);

  }
}
