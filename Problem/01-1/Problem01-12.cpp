#include <iostream>

using namespace std;

int main(void)
{
	char name[100] = {0, };
	char phone[100] = {0, };
	
	cout << "이름 : ";
	cin >> name;
	
	cout << "번호 : ";
	cin >> phone;
	
	cout << "이름은 " << name << " 입니다"  << endl;
	cout << "번호는 " << phone << " 입니다" << endl;
	
	return 0;
}
