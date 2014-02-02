#include <Servo.h>

Servo ultra;

int pinUltra = 11;
void setup() {
  Serial.begin(9600);
  
  while(!Serial){}
  ultra.attach(pinUltra);
  ultra.write(68);
}

void loop() {
  
  if(Serial.available()) {
    int input = Serial.read() - '0';
    
    switch(input) {
      case 0: ultra.write(0); break;
      case 1: ultra.write(68); break;
      case 2: ultra.write(135); break;
    }
  }
}
