#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main(void)
{
	// using을 사용하여 namespace Hybrid에 정의된 HybFunc를 호출할 때는,
	// namespace를 지정하지 않고 호출하겠다는 것을 선언.
	using Hybrid::HybFunc;
	HybFunc();
	return 0;
}
