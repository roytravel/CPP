#include <iostream>
using namespace std;

namespace CAR_CONST
{
    enum
    {
        ID_LEN      =20,
        MAX_SPD     =200,
        FUEL_STEP   =2,
        ACC_STEP    =10,
        BRK_STEP    =10
    };
}


struct Car
{
    char gamerID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;

    void ShowCarState();
    void Accel();
    void Break();
};


void Car::ShowCarState()
{
    cout << "소유자ID : " << gamerID << endl;
    cout << "연료량 : " << fuelGauge << endl;
    cout << "현재속도 : " << curSpeed << endl << endl;
}


void Car::Accel()
{
    if (fuelGauge < 0)
        return;
    
    else
        fuelGauge = fuelGauge - CAR_CONST::FUEL_STEP;
    
    if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
    {
        curSpeed = CAR_CONST::MAX_SPD;
        return;
    }

    curSpeed = curSpeed + CAR_CONST::ACC_STEP;
}


