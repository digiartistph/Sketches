#include <Servo.h>

#define ONEEIGHTY_DEGREE 180
#define NINETY_DEGREE 90
#define FORTYFIVE_DEGREE 45
#define LEFT 0
#define RIGHT 1

Servo sLegAHip, sLegAUpperLimb, sLegALowerLimb,
      sLegBHip, sLegBUpperLimb, sLegBLowerLimb,
      sLegCHip, sLegCUpperLimb, sLegCLowerLimb,
      sLegDHip, sLegDUpperLimb, sLegDLowerLimb,
      sLegEHip, sLegEUpperLimb, sLegELowerLimb,
      sLegFHip, sLegFUpperLimb, sLegFLowerLimb;

int pinLegAHip = A2;
int pinLegAUpperLimb = A1;
int pinLegALowerLimb = A0;

int pinLegBHip = A5;
int pinLegBUpperLimb = A4;
int pinLegBLowerLimb = A3;

int pinLegCHip = A8;
int pinLegCUpperLimb = A7;
int pinLegCLowerLimb = A6;

int pinLegDHip = 4;
int pinLegDUpperLimb = 3;
int pinLegDLowerLimb = 2;

int pinLegEHip = 7;
int pinLegEUpperLimb = 6;
int pinLegELowerLimb = 5;

int pinLegFHip = 10;
int pinLegFUpperLimb = 9;
int pinLegFLowerLimb = 8;

void setup() {
  sLegBHip.attach(pinLegBHip);
  sLegBUpperLimb.attach(pinLegBUpperLimb);
  sLegBLowerLimb.attach(pinLegBLowerLimb);
  
  sLegCHip.attach(pinLegCHip);
  sLegCUpperLimb.attach(pinLegCUpperLimb);
  sLegCLowerLimb.attach(pinLegCLowerLimb);
  
  sLegDHip.attach(pinLegDHip);
  sLegDUpperLimb.attach(pinLegDUpperLimb);
  sLegDLowerLimb.attach(pinLegDLowerLimb);
  
  sLegEHip.attach(pinLegEHip);
  sLegEUpperLimb.attach(pinLegEUpperLimb);
  sLegELowerLimb.attach(pinLegELowerLimb);
  
  sLegFHip.attach(pinLegFHip);
  sLegFUpperLimb.attach(pinLegFUpperLimb);
  sLegFLowerLimb.attach(pinLegFLowerLimb);
  
  sLegBHip.write(NINETY_DEGREE);
  sLegBUpperLimb.write(FORTYFIVE_DEGREE);
  
}

void loop() {
  
}
