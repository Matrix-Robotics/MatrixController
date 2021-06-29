#include <MatrixController.h>

MatrixController MXctrl;

int channel, pwm;

void setup()
{
    Serial.begin(115200);
    Serial.print("Starting...\n");
    MXctrl.begin();
    Serial.println("Matrix Controller Activated");
}

void loop()
{
    Serial.println("===============================================================");
    
    channel = 1;
    pwm = 0;
    MXctrl.motorInvert(channel, false);
    MXctrl.motorSet(channel, pwm);
    Serial.println("set channel " + (String)channel + " to " + (String)pwm);
    delay(500);

    channel = 2;
    pwm = 255;
    MXctrl.motorSet(channel, pwm);
    Serial.println("set channel " + (String)channel + " to " + (String)pwm);
    delay(500);

    channel = 1;
    pwm = 120;
    MXctrl.motorInvert(channel, true);
    MXctrl.motorSet(channel, pwm);
    Serial.println("set channel " + (String)channel + " to -" + (String)pwm);
    delay(500);

    channel = 2;
    pwm = 180;
    MXctrl.motorSet(channel, pwm);
    Serial.println("set channel " + (String)channel + " to -" + (String)pwm);
    delay(500);
}