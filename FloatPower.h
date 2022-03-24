#include <iostream>
#pragma once
using namespace std;
class FloatPower
{
private:
	double  first, second;
public:
	int get_f() const { return first; };
	int get_s() const { return second; };
	void set_f(double value);
	void set_s(double value);

	bool init(double x, double y);
	void display() const;
	void read();

	void power();
};

