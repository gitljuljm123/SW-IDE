#define PIN_LED 7
#define ON 0
#define OFF 1
void setup()
{
    pinMode(PIN_LED, OUTPUT);
    Serial.begin(115200);
    while (!Serial) {}
    digitalWrite(PIN_LED, ON);
    delay(1000);
}
void loop()
{
    int i;
    for (i = 0; i <= 5; i++)
    {
        digitalWrite(PIN_LED, OFF);
        delay(100);
        digitalWrite(PIN_LED, ON);
        delay(100);
    }
    while (true) {}
}
