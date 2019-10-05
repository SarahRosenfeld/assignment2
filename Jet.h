// by Sarah Rosenfeld

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"
#include <random>
class Jet : public PoweredVehicle{
	private:
		int numberOfEngines;
	public:
		Jet();
		explicit Jet(string brand, string model, string fuelType, int numberOfEngines = 1);

		virtual ~Jet();	
		int getNumberOfEngines();		
		void setEngines(int numberOfEngines);
		virtual double mileageEstimate(double time);
		virtual string toString();
		
};


#endif
