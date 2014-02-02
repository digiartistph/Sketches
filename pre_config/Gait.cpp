#include "Gait.h"

Gait::Gait(Limb& LimbA, Limb& LimbB, Limb& LimbC, Limb& LimbD, Limb& LimbE, Limb& LimbF) {
  mLimbA = &LimbA;
  mLimbB = &LimbB;
  mLimbC = &LimbC;
  mLimbD = &LimbD;
  mLimbE = &LimbE;
  mLimbF = &LimbF;
}

int Gait::walk(directions directn) {
   switch(directn)  {
      case FORWARD:
        mLimbA->walk(BACKWARD, LEFT);
        mLimbB->walk(FORWARD, LEFT);
        mLimbC->walk(BACKWARD, LEFT);
        
        mLimbD->walk(FORWARD, RIGHT);
        mLimbE->walk(BACKWARD, RIGHT);
        mLimbF->walk(FORWARD, RIGHT);
        break;
        
      case BACKWARD: 
        break;
   }
}

