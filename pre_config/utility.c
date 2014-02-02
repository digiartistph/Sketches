#ifndef ONEEIGHTY_DEGREE
  #include "Legservos.h"
#endif

/**
 * converts the angle from both sides
 */
int getAbsoluteAngle(int angle, int side) {
  
  switch(side) {
      case 0: // left
          return ONEEIGHTY_DEGREE - angle;
          break;
      case 1: // right
      default:
          return angle;
  }
}
