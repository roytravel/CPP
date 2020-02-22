#include <iostream> 

using namespace std;

int main(void)
{
	int value = 0;
	
	cout << "숫자를 입력하세요 : ";
	cin >> value;
	
	for (int i = 1; i < 10; i++)
	{
		cout << value << " * " << i << " = " << value * i << endl;
	}
	
	return 0;
}
