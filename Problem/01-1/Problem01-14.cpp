#include <iostream>

using namespace std;

int main(void)
{
	int value = 0;
	
	while (1)
	{
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> value;
		
		if (value == -1)
		{
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		
		cout << "이번 달 급여: " << 50 + (value * 0.12)<< "만원" << endl;	
	}
	
	return 0;
}
