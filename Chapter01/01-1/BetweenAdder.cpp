#include <iostream>

int main(void)
{
	int value1, value2;
	int result = 0;
	std::cout << "�� ���� ���� �Է� : ";
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
	
	std::cout << "�� �� ������ ���� ��: " << result << std::endl;
	return 0;
}
