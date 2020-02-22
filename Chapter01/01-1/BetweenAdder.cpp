#include <iostream>

int main(void)
{
	int value1, value2;
	int result = 0;
	std::cout << "두 개의 숫자 입력 : ";
	std::cin >> value1 >> value2;
	
	if (value1 < value2)
	{
		for (int i = value1 + 1; i < value2; i++)
		{
			result = result + i;
		}
	}
	
	else if (value1 > value2)
	{
		for(int i = value2 + 1; i < value1; i++)
		{
			result = result + i;
		}
	}
	
	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
	return 0;
}
