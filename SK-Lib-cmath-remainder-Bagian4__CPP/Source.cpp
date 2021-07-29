#include <iostream>
#include <cmath>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    double x = 7.5, y = 2.1;
    double hasil = remainder(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << hasil << endl;

    x = -17.50, y = 2.0;
    hasil = remainder(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << hasil << endl;

    y = 0;
    hasil = remainder(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << hasil << endl;

    _getch();
    return 0;
}