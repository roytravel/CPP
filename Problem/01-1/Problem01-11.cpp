#include <iostream>

using namespace std;

int main(void)
{
	int value = 0;
	int result = 0;
	
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "��° ���� �Է�: ";
		cin >> value;
		result = result + value;
	}
	
	cout << "�հ�: " << result << endl;
	return 0;
}
