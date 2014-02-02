#include <NewPing.h>

#define TRIGGER_PIN 30
#define ECHO_PIN 31 

#define MAX_DISTANCE 200 

//NewPing sonar; //NewPing(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); 
NewPing n = NewPing();
void setup() { 
//  Serial.begin(115200); 
  Serial.begin(9600);
} 

void loop() { 
  delay(50); int uS = sonar.ping(); 
  Serial.print("Ping: "); 
  Serial.print(uS / US_ROUNDTRIP_CM); 
  Serial.println("cm"); 
}
