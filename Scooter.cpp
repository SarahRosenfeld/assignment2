#include "Scooter.h"

Scooter::Scooter(string brand, string model, string fuelType, int speedSetting){
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setSpeedSetting(speedSetting);
}

Scooter::~Scooter() = default;

int Scooter::getSpeedSetting(){
	return speedSetting;
}

void Scooter::setSpeedSetting(int speedSetting){
	speedSetting = speedSetting;
}

double Scooter::mileageEstimate(double t){
	double mileage = getSpeedSetting() * t;
	int random;
	srand(time(0));
	if (fuelType == "electric"){
		random = rand() % 15 + 1;
		mileage += mileage * random * .1;	
	}
	return mileage;
}

string Scooter::toString(){
	return "-> Scooter\n" + PoweredVehicle::toString() + "\n\tSpeed setting: " +
          to_string(speedSetting);
}
