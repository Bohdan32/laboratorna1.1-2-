#include "FloatPower.h"
void FloatPower::set_f(double value)
{
	first = value;
}

void FloatPower::set_s(double value)
{
	second = value;
}
bool FloatPower::init(double x, double y)
{
	if (x != 0)
	{
		first = x;
		second = y;
		return true;
	}
	else {
		cout << "first number = 0 error" << endl;
		return false;
	}
};

void FloatPower::display() const
{
	cout << "a = " << first << endl;
	cout << "b = " << second << endl;
};

void FloatPower::read()
{
	double x, y;
	do {
		cout << "first = ";
		cin >> x;
		cout << "second = ";
		cin >> y;
	} while (!init(x, y));

};
void FloatPower::power()
{
	double c;
	c = pow(first,second);
	cout << "c = " << c << endl;
};
