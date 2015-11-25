/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 90;    // variable to store the servo position
int time0=0 ;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop(){
  
    for(int i=0;i<5;i++)
    {
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(3000);
      time0++;
      Serial.print(time0);
    }
  
}

