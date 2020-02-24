#include <iostream>
using namespace std;

#define ID_LEN      20
#define MAX_SPD     200
#define FUEL_STEP   2
#define ACC_STEP    10
#define BRK_STEP    10

struct Car
{
    char gamerID[ID_LEN];
    int fuelGauge;
    int curSpeed;


    void ShowCarState()
    {
        cout << "소유자ID : " << gamerID << endl;
        cout << "연료량: " << fuelGauge << "%" << endl;
        cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
    }

    void Accel()
    {
        if (fuelGauge <= 0)
            return;

        else
            fuelGauge = fuelGauge + FUEL_STEP;
        
        if (curSpeed + ACC_STEP >= MAX_SPD)
        {
            curSpeed = MAX_SPD;
            return ;
        }

        curSpeed = curSpeed + ACC_STEP;
    }

    void Break()
    {
        if (curSpeed < BRK_STEP)
        {
            curSpeed = 0;
            return ;
        }

        curSpeed = curSpeed - BRK_STEP;
    }

    
};


int main(void)
{
    Car eol99 = {"eol99", 100, 0};
    eol99.Accel();
    eol99.Accel();
    eol99.ShowCarState();
    eol99.Break();
    eol99.ShowCarState();

    Car eol77 = {"eol77", 100, 0};
    eol77.Accel();
    eol77.Break();
    eol77.ShowCarState();

    return 0;
}
