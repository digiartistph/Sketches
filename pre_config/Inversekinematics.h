#ifndef INVERSEKINEMATICS_H
#define INVERSEKINEMATICS_H
#include <math.h>

#define ZOFFSET 8.4
#define FEMUR -12.6
#define TIBIA 92.56
#define TIBIAFEMUR 11.3
#define PI 3.1415926
#define ONEEIGHTY_DEGREE 180

class Inversekinematics {
    public:
        // default coonstructor
        Inversekinematics();
        
        // destructor
        ~Inversekinematics();
        
        // methods
        void move(double, double);
        
        // accessors
        double getUpperLimb();
        double getLowerLimb();
        double getHip();
    
     private:
        // data members
        double alpha;
        double beta;
        double gamma;

        // methods
		double toDegree(double);
		void calculateAlpha(double);
		void calculateBeta(double);
		void calculateGamma(double);
    
};

#endif

