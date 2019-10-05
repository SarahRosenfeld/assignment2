
#ifndef DRIVINGSIMULATOR_SCOOTER_H
#define DRIVINGSIMULATOR_SCOOTER_H

#include "PoweredVehicle.h"

class Scooter : public PoweredVehicle {

private:
    int speedSetting;

public:
    explicit Scooter(string brand, string model, string fuelType = "electric", int speedSetting = 1);

    virtual ~Scooter();
    int getSpeedSetting();
    void setSpeedSetting(int speedSetting);
    virtual double mileageEstimate(double t);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_BICYCLE_H
