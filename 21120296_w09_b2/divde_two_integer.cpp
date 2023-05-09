#include "divde_two_integer.h"
Divide::Divide()
{
	num1 = 0;
	num2 = 1;

}

Divide::~Divide()
{
}

void Divide::input()
{
	cout << "num1: ";
	cin >> num1;
	cout << "num2: ";
	cin >> num2;
}

double Divide::division()
{
	if (num2 == 0) {
		throw invalid_argument("Error! Devide by zero!");
	}
	return double(num1/num2);
}