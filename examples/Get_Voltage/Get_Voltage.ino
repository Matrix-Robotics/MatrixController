#include <MatrixController.h>

MatrixController MXctrl;

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
    
    Serial.print("Voltage=");
    Serial.println(MXctrl.getBattery());

    delay(250);
}