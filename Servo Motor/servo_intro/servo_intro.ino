
#include <Servo.h>

Servo servo_16;

void setup()
{
  servo_16.attach(16);
  servo_16.write(0);
  delay(0);

}
void loop()
{

    servo_16.write(0);
    delay(1000);
    servo_16.write(90);
    delay(0);
    servo_16.write(180);
    delay(1000);

}
