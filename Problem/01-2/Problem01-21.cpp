#include <iostream>

using namespace std;

void swap(int *ptr1, int *ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void swap(char *ptr1, char *ptr2)
{
	char temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void swap(double *ptr1, double *ptr2)
{
	char temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}


int main(void)
{
	int number1 = 5, number2 = 21;
	swap(&number1, &number2);
	cout << number1 << ' ' << number2 << endl;
	
	
	char char1 = 'A', char2 = 'Z';
	swap(&char1, &char2);
	cout << char1 << ' ' << char2 << endl;
	
	
	double double1 = 19.97, double2 = 5.21;
	swap(&double1, &double2);
	cout << double1 << ' ' << double2 << endl;
	
	
	return 0;
}
