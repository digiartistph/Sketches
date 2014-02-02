#ifndef GAIT_H
#define GAIT_H

#include "Legservos.h"
#include "Limb.h"

class Gait {
  public:
    Gait(Limb&, Limb&, Limb&, Limb&, Limb&, Limb&);
    
    int walk(directions);
    
    int strafe(directions);
  
  private:
  Limb* mLimbA;
  Limb* mLimbB;
  Limb* mLimbC;
  Limb* mLimbD;
  Limb* mLimbE;
  Limb* mLimbF;
};

#endif
