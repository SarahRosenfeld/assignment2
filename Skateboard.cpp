#include "Skateboard.h"
#include <stdlib>

Skateboard::Skateboard(){

}

Skateboard::Skateboard(string brand, string model){
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;

int Skateboard::mileageEstimate(double time){
	double mileage;
	int random;
	
	srand();
	random = rand() % 5 + 1;

	mileage = random * 0.1 * time;

	if(time > 25 && time < 250){
		random = rand() % (time/3.0 - 1) + 1;
		mileage += random;  
	}
	return floor(mileage);
}


string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n";
}

