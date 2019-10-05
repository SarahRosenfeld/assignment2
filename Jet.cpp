// by Sarah Rosenfeld

#include "Jet.h"
#include <random>

Jet::Jet(){
	setEngines(1);
	setBrand("Custom");
	setModel("737");
}

Jet::Jet(string brand, string model, string FuelType, int numberOfEngines){
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setEngines(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines(){
	return numberOfEngines;
}

void Jet::setEngines(int num){
	//ensures number of engines is >= 1
	if(num > 0){
		numberOfEngines = num;
	} else{
		numberOfEngines = 1;
	}
}

double Jet::mileageEstimate(double t){
	int miles;
	double mileage;

	//seeds random number generator
	srand(time(NULL));

	//gets random number between 40 and 100
	miles = rand() % 61 + 40;
	mileage = miles * t;

	if(fuelType == "Rocket" && getNumberOfEngines() > 2){
		//incresses mileage by 5.5% if Rocket fuel
		// and more than 2 engines
		mileage *= 1.055;
	}	
	
	return mileage;
}


string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
          to_string(numberOfEngines);
}
