#include "Jet.h"

Jet::Jet(){
	setNumberOfEngines(1);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines(){
	return numberOfEngines;
}

void Jet::setEngines(int num){
	if(num > 0){
		numberOfEngines = num;
	} else{
		numberOfEngines = 1;
	}
}

double Jet::mileageEstimate(double time){
	int miles;
	double mileage;

	srand(time(NULL));

	miles = rand() % 61 + 40;
	mileage = miles * time;

	if(fueltype == "Rocket" && getNumberOfEngines() > 2){
		mileage *= 1.055;
	}	
	
	return mileage;
}
