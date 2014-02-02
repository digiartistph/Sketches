// Demo sketch 
// This sketch will output distance info via the UART port
// port assignment 
// change as may be necessary const 
int trigger=31; 
const int echo=30;
float distance;
void setup(){
 Serial.begin(9600); 
 pinMode(trigger,OUTPUT); 
 pinMode(echo,INPUT); 
}
void loop(){
// Trigger US-100 to start measurement 
// Set up trigger 
 digitalWrite(trigger,LOW); 
 delayMicroseconds(5); 
// Start Measurement 
 digitalWrite(trigger,HIGH); 
 delayMicroseconds(10); 
 digitalWrite(trigger,LOW); 
// Acquire and convert to mtrs 
 distance=pulseIn(echo,HIGH); 
 distance=distance*0.0001657; 
// send result to UART 
Serial.println(distance); delay(50); 
}
