#include <iostream>
#include "FloatPower.h"

using namespace std;

int main()
{
    FloatPower fp1, fp2; 

    cout << "FloatPower1" << endl;
    fp1.read();
    fp1.display();
    fp1.power();

    cout << "FloatPower2" << endl;
    fp2.set_f(6);
    fp2.set_s(3);
    fp2.power();
}

FloatPower makeFloatPower(int x, int y)
{
    FloatPower fp;
    if (!fp.init(x, y))
        cout << "wrong argument" << endl;
    return fp;
}
