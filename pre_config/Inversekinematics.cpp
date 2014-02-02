#include "Inversekinematics.h"

// ==================================
// default constructor
// ==================================
Inversekinematics::Inversekinematics() {
    // initializes data members
    alpha = 0.0;
    beta = 0.0;
    gamma = 0.0;
}
// ==================================
// accessors
// ==================================
double Inversekinematics::getUpperLimb() { // alpha
    return alpha;
}

double Inversekinematics::getLowerLimb() { // beta
   return beta; 
}

double Inversekinematics::getHip() { // gamma
    return gamma; 
}

// ==================================
// methods -- public/private
// ==================================
double Inversekinematics::toDegree(double val) {
    return val * (ONEEIGHTY_DEGREE / PI);
}

void Inversekinematics::move(double projY, double length) {
	/**
	 * Note: the following are the range of values for length and projectY
	 * 	length: 9 - 17
	 * 	projY value: -11 to 9
	 */
	calculateAlpha(length);
	calculateBeta(length);
	calculateGamma(projY);

}

void Inversekinematics::calculateAlpha(double length) {
	alpha = toDegree(acos(ZOFFSET / length))  + toDegree(acos((TIBIA - pow(length, 2))/(FEMUR * length)));
}

void Inversekinematics::calculateBeta(double length) {
	beta = toDegree(acos((pow(length, 2) - TIBIA) / (FEMUR * length))) ;
}

void Inversekinematics::calculateGamma(double projY) {
	gamma = toDegree(acos(projY / TIBIAFEMUR)) ;
}

// ==================================
// destructor
// ==================================
Inversekinematics::~Inversekinematics(){}



