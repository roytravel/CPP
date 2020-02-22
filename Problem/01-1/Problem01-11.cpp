#include <iostream>

using namespace std;

int main(void)
{
	int value = 0;
	int result = 0;
	
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 정수 입력: ";
		cin >> value;
		result = result + value;
	}
	
	cout << "합계: " << result << endl;
	return 0;
}
