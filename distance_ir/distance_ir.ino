/* Sharp GP2Y0A60SZ0F IR Distance Sensor Sample Program This program allows the IR sensor to measure distance in inches. Conversion from inches to cm is also included. Codes by: eGizmo Mechatronix Central August 6, 2013 */ 
void setup() {
  Serial.begin(9600); 
} 
void loop() { 
int out = analogRead(A12); 
// MeasuresVout 
float voltage = out * (5.0 / 1023.0); 
//Vout conversion 
float distance = (((1/(voltage*voltage))*0.003))* 100; 
//Vout to inches 
Serial.print(distance); 
Serial.print(" "); 
Serial.print("inches "); 
float distance1 = distance*2.54; 
// Cm conversion 
Serial.print(distance1); 
Serial.print(" ");
Serial.println("centimeter");
delay(250);
}

