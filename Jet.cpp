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
	if(num > 0){
		numberOfEngines = num;
	} else{
		numberOfEngines = 1;
	}
}

double Jet::mileageEstimate(double t){
	int miles;
	double mileage;

	srand(time(NULL));

	miles = rand() % 61 + 40;
	mileage = miles * t;

	if(fuelType == "Rocket" && getNumberOfEngines() > 2){
		mileage *= 1.055;
	}	
	
	return mileage;
}


string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
          to_string(numberOfEngines);
}
