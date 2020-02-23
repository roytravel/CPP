#include <iostream>
using namespace std;

void swap(int &ref1, int &ref2);


int main(void)
{
	int num1 = 10;
	int num2 = 20;
	swap(num1, num2);
	
	cout << num1 << endl;
	cout << num2 << endl;
	return 0;
}

void swap(int &ref1, int &ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}
