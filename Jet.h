

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle{
	private:
		int numberOfEngines;
	public:
		explicit Jet();

		virtual ~Jet();	
		int getNumberOfengines();		
		void setEngines(int numberOfEngines);
		virtual double mileageEstimate(double time);
		virtual string tostring();
		
};


#endif
