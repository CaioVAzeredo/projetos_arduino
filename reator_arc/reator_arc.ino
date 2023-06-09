int botao = 2;
int led = 10;
int estadobotao;
int estadoled;
int i;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
 estadobotao = digitalRead(botao);

  
 if ((estadoled == LOW) && (estadobotao == LOW)) {
  
   digitalWrite(led, HIGH);
          delay(200);
          digitalWrite(led, LOW);
          delay(200);
          digitalWrite(led, HIGH);
          delay(500);
          digitalWrite(led, LOW);
          delay(500);
          digitalWrite(led, HIGH);
          delay(100);
          digitalWrite(led, LOW);
          delay(100);
          digitalWrite(led, HIGH);
          delay(100);
          digitalWrite(led, LOW);
          delay(100);
         digitalWrite(led, HIGH);
         delay(100);
         digitalWrite(led, HIGH);
         estadoled = 1;
         estadobotao = 1;
         delay(200);
         
         
 }
 
   if ((estadoled == HIGH) && (estadobotao == LOW)){
         for(int pwm = 255; pwm >-1; pwm --){
          analogWrite(led, pwm);
          delay(5);
          }
          delay(200);
          estadoled = 0;
         
         }

  Serial.println(estadobotao);
 delay(10);
  
 }

 

 
 
