// by Sarah Rosenfeld

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
	
	//seeds random number genertor	
	srand(time(0));
	
	//gets random number bettween 1 and 5
	random = rand() % 5 + 1;

	//makes sure mileage is time * percentage 
	// betwwen 1 and 5
	mileage = random * 0.1 * t;

	if(t > 25 && t < 250){
		//if time > 25 and < 250
		// make sure mileage is between 1 and 
		// a third of the time
		random = rand() % ((int)t/3 - 1) + 1;
		mileage += random;  
	}
	return floor(mileage);
}


string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n";
}

