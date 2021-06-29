#include <MatrixController.h>

MatrixController MXctrl;

int channel;
float round;

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
    round = 1.5;
    MXctrl.motorInvert(channel, false);
    MXctrl.motorRound(channel, round);
    Serial.println("set channel " + (String)channel + " to " + (String)round);
    delay(500);

    channel = 2;
    round = 3.5;
    MXctrl.motorInvert(channel, false);
    MXctrl.motorSet(channel, round);
    Serial.println("set channel " + (String)channel + " to " + (String)round);
    delay(1500);

    channel = 1;
    round = 1.5;
    MXctrl.motorInvert(channel, true);
    MXctrl.motorRound(channel, round);
    Serial.println("set channel " + (String)channel + " to -" + (String)round);
    delay(500);

    channel = 2;
    round = 3.5;
    MXctrl.motorInvert(channel, true);
    MXctrl.motorSet(channel, round);
    Serial.println("set channel " + (String)channel + " to -" + (String)round);
    delay(1500);
}