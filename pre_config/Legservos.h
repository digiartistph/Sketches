// defines constant angles
#ifndef LEGSERVOS_H
#define LEGSERVOS_H

#define NINETY_DEGREE 90
#define FORTYFIVE_DEGREE 45
#define ONETHREEFIVE_DEGREE 100
#define ONEEIGHTY_DEGREE 180

// defines the height of the leg should be raised upon
#define RAISELEGOFFSET_Y 20

// defines pins for each leg and leg partition
#define LEG_A_HIP A2
#define LEG_A_UPPER A1
#define LEG_A_LOWER  A0

#define LEG_B_HIP A5
#define LEG_B_UPPER A4
#define LEG_B_LOWER A3

#define LEG_C_HIP A8 // something is not right with this pin (be sure to select Mega 2560 board).
#define LEG_C_UPPER A7
#define LEG_C_LOWER A6

#define LEG_D_HIP 4
#define LEG_D_UPPER 3
#define LEG_D_LOWER  2

#define LEG_E_HIP 7
#define LEG_E_UPPER 6
#define LEG_E_LOWER  5

#define LEG_F_HIP 10
#define LEG_F_UPPER 9
#define LEG_F_LOWER  8

#define PIR_LEFT A13
#define PIR_MID A14
#define PIR_RIGHT A15

#define USONIC_TRIG 30
#define USONIC_ECHO 31
#define IR_DIST A12
#define ULTRASONICSERVO 11
#define MAX_DISTANCE 200 // constant variable for the ultrasonic sensor || pinging purpsoses

enum directions {
    FORWARD, BACKWARD, STRAFELEFT, STRAFERIGHT
};
enum sides {LEFT, RIGHT};
enum revolution{revFORWARD, revBACKWARD};

// defines user-defined data type
struct Leg {
    int hip;
    int upperLimb;
    int lowerLimb; 
}; 

typedef struct Leg leg;

// prototypes
void assignPins();
void attachServos();
int getAbsoluteAngle(int, int);

#endif
