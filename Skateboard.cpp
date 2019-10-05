#include "Skateboard.h"
#include <random>

Skateboard::Skateboard(){

}

Skateboard::Skateboard(string brand, string model){
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double t){
	double mileage;
	int random;
	
	srand(time(0));
	random = rand() % 5 + 1;

	mileage = random * 0.1 * t;

	if(t > 25 && t < 250){
		random = rand() % ((int)t/3 - 1) + 1;
		mileage += random;  
	}
	return floor(mileage);
}


string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n";
}

