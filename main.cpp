#include "mbed.h"
#include <cstdio>


 InterruptIn BUTTON(PC_13); // Initialise the User button as the interupt button
DigitalOut led(LED1) ;
        // Initialise the digital pin LED1 as an output

volatile int ispressed = 0;

void BUTTON_pressed(){
    led = 1;
    ispressed = 1;
}
int main()
{
        
        BUTTON.fall(&BUTTON_pressed);   //action to be taken when button is in fall (pushed)
        led = 0;
        while (true) {
            if (ispressed == 1) {
                printf("button pressed! %d \r\n",ispressed); //print to the command screen that the button has been pushed 
                ispressed = 0;
                led = 0;
            }
        }
}
    


