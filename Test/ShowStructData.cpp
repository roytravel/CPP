#include <iostream>
using namespace std;

struct MAPLESTORY
{
    char GAMEID[20];
    char JOB[20];
    int LEVEL;
    int EXP;
    int HP;
    int MP;
    int CASH;
};


void ShowUserInfo(const MAPLESTORY &data)
{
    cout << "[+] 이름   : " << data.GAMEID << endl;
    cout << "[+] 직업   : " << data.JOB << endl;
    cout << "[+] 레벨   : " << data.LEVEL << endl;
    cout << "[+] 경험치 : " << data.EXP << endl;
    cout << "[+] 체력   : " << data.HP << endl;
    cout << "[+] 마나   : " << data.MP << endl;
    cout << "[+] 캐쉬   : " << data.CASH << endl;
}


int main(void)
{
    MAPLESTORY maple = {"얼한", "프리스트", 85, 999999, 1500, 4500, 35000};
    ShowUserInfo(maple);  

    return 0;
}
