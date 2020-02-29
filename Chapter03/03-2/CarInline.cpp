#include <cstring>
#include "CarInline.h"
using namespace std;

void Car::InitMembers(char * ID, int fuel)
{
	strcpy_s(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::Accel()
{
	if(fuelGauge <= 0)
		return;
	
	else
		fuelGauge = fuelGauge - CAR_CONST::FUEL_STEP;
		
	
	if((curSpeed+CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	
	curSpeed = curSpeed + CAR_CONST::ACC_STEP;
}


