#include <iostream>

using namespace std;

int main(void)
{
	char name[100] = {0, };
	char phone[100] = {0, };
	
	cout << "�̸� : ";
	cin >> name;
	
	cout << "��ȣ : ";
	cin >> phone;
	
	cout << "�̸��� " << name << " �Դϴ�"  << endl;
	cout << "��ȣ�� " << phone << " �Դϴ�" << endl;
	
	return 0;
}
