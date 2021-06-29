#include <MatrixController.h>

MatrixController MXctrl;

int channel, angle;

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
    angle = 0;
    MXctrl.servoSet(channel, angle);
    Serial.println("set channel " + (String)channel + " to " + (String)angle);
    delay(500);

    channel = 2;
    angle = 60;
    MXctrl.servoSet(channel, angle);
    Serial.println("set channel " + (String)channel + " to " + (String)angle);
    delay(500);

    channel = 1;
    angle = 120;
    MXctrl.servoSet(channel, angle);
    Serial.println("set channel " + (String)channel + " to " + (String)angle);
    delay(500);

    channel = 2;
    angle = 180;
    MXctrl.servoSet(channel, angle);
    Serial.println("set channel " + (String)channel + " to " + (String)angle);
    delay(500);
}