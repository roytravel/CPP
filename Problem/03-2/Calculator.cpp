#include <iostream>
using namespace std;


class Calculator
{
	private:
		int countAdd;
		int countMin;
		int countMul;
		int countDiv;
	
	public:
		void Init();
		double Add(double num1, double num2);
		double Min(double num1, double num2);
		double Mul(double num1, double num2);
		double Div(double num1, double num2);
		void ShowOpCount();
};


void Calculator::Init()
{
	countAdd = 0;
	countMin = 0;
	countMul = 0;
	countDiv = 0;
}


double Calculator::Add(double num1, double num2)
{
	countAdd = countAdd + 1;
	return num1 + num2;
}


double Calculator::Min(double num1, double num2)
{
	countMin = countMin + 1;
	return num1 - num2;
}


double Calculator::Mul(double num1, double num2)
{
	countMul = countMul + 1;
	return num1 * num2;
}


double Calculator::Div(double num1, double num2)
{
	countDiv = countDiv + 1;
	return num1 / num2;
}


void Calculator::ShowOpCount()
{
	cout << "덧셈: " << countAdd << ' ';
	cout << "뺄셈: " << countMin << ' ';
	cout << "곱셈: " << countMul << ' ';
	cout << "나눗셈: " << countDiv << ' ';
}


int main(void)
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;
}
