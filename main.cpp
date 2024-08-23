#include "mbed.h"
#include "arm_book_lib.h"

#define BLINKING_TIME_GAS_ALARM 1000
#define BLINKING_TIME_OVER_TEMP_ALARM_ 500
#define BLINKING_TIME_GAS_AND_OVER_TEMP_ALARM 100

int main()
{
    DigitalIn gasDetector(D2);

    DigitalOut alarmLed(LED1);
    DigitalOut alarmLed1(LED2);
    DigitalOut alarmLed2(LED3);
    printf("%s\n", "HelloWorld");
    

    gasDetector.mode(PullDown);

    alarmLed = OFF;
    //
    while(true){
        printf("%s\n", "HelloWorld");
        alarmLed=gasDetector;
        delay( BLINKING_TIME_GAS_AND_OVER_TEMP_ALARM );
        alarmLed1=gasDetector;
        delay( BLINKING_TIME_GAS_ALARM );
        alarmLed2=gasDetector;
        delay(  BLINKING_TIME_GAS_AND_OVER_TEMP_ALARM );

    }
    //while (true) {
    //    if ( gasDetector == ON ) {
    //        alarmLed = ON;
    //    }
    //    
    //    if ( gasDetector == OFF ) {
    //        alarmLed = OFF;
    //    }
    //}
}