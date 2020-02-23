#include <iostream>
#include <string.h>
using namespace std;

// C++에서는 malloc과 free 함수를 호출하는 일이 없어야 한다.
// C++에서는 malloc과 free 함수의 호출이 문제가 될 수 있다. 

// malloc -> new
// example 1) int * ptr1 = new int
// example 2) double * ptr2 = new double;
// example 3) int * arr1 = new int[3];
// example 4) double * arr = new double[7];

// free -> delete
// example 1) delete ptr1;
// example 2) delete ptr2;
// example 3) delete []arr1;
// example 4) delete []arr2;


char * MakeStrAdr(int len)
{
	//	char * str = (char *)malloc(sizeof(char)*len);
	char * str = new char[len];
	return str;
}


int main(void)
{
	char * str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	//	free(str);
	delete []str;
	return 0;
}
