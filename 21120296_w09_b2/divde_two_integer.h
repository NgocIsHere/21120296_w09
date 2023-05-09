#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;
class Divide {
	int num1;
	int num2;
public:
	Divide();
	~Divide();
	void input();
	double division();
};