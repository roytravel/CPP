#include <iostream>

int main(void)
{
	int value1;
	std::cout << "첫 번째 숫자입력: ";
	std::cin >> value1;
	
	int value2;
	std::cout<< "두 번째 숫자입력: ";
	std::cin >> value2;
	
	int result = value1 + value2;
	std::cout << "덧셈 결과: " << result<<std::endl;
	return 0;
}
