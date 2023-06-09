
#define LED_AZUL 

void setup(){
    pinMode(LED_AZUL, OUTPUT);
    serial.begin(115200)
}
void loop(){
    digitalWrite(LED_AZUL, HIGH);
    delay(100);
    serial.println("Piscou!!");
}       