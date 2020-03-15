#include "mbed.h"


DigitalOut redLED(LED_RED);

DigitalOut greenLED(LED_GREEN);


int Led_red(DigitalOut& ledpin);
int Led_green(DigitalOut& ledpin);


int main()

{

   redLED = 1;

   greenLED = 1;

   while (true) {

       Led_red(redLED);

       Led_green(greenLED);

   }

}