#include <iostream>

using namespace std;

int main(void)
{
	int value = 0;
	
	while (1)
	{
		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> value;
		
		if (value == -1)
		{
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
		
		cout << "�̹� �� �޿�: " << 50 + (value * 0.12)<< "����" << endl;	
	}
	
	return 0;
}
