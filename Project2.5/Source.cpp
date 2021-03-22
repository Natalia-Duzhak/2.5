//Source.ccp
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include "Equilateral.h"
#include "Triangle.h"
#pragma pack(1)

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    Triangle a, b(0,0,0);
    Equilateral d(4,4,4);

    

    cout << "Вивід значень : " << endl;
    cin >> a;
    cout << a;

    cout << "A = " << a.A() << endl;
    cout << "B = " << a.B() << endl;
    cout << "C = " << a.C() << endl;
    cout << "Perimeter = " << a.Perimeter() << endl;

    double S = d.Square();
    cout << "Square = " << S << endl;
    
 
    cout << "b++" << endl;
    cout << b++ << endl;

    cout << "b--" << endl;
    cout << b-- << endl;

    cout << "++b" << endl;
    cout << ++b << endl;

    cout << "--b" << endl;
    cout << --b << endl;

    cout << "Size " << sizeof(Equilateral) << endl;

    return 0;

}
