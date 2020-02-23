#include <iostream>
using namespace std;

int Adder(int &num)
{
	num = num + 1;
}

int inverSign(int &num)
{
	num = -num;
}


int main(void)
{
	int num = 10;
	
	Adder(num);
	cout << num << endl;
	
	inverSign(num);
	cout << num << endl;
	
	return 0;
}
