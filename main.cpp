#include "mbed.h"



 InterruptIn BUTTON(PC_13); // Initialise the User button as the interupt button
DigitalOut led(LED1) ;
        // Initialise the digital pin LED1 as an output

volatile char ispressed = 0;

void BUTTON_pressed(){
    led = 1;
    ispressed = 1;
}
int main()
{
        printf("This is Mbed OS %d.%d.%d. \r\n\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);
        BUTTON.fall(&BUTTON_pressed);
        led = 0;
        while (true) {
            if (ispressed = 1) {
                printf("button pressed! %d \r\n",ispressed);
                ispressed = 0;
                led = 0;
            }
        }
}
    


