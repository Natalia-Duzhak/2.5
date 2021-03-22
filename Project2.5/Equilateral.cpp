//Equilateral.ccp
#include "Equilateral.h"
#include "Triangle.h"
#include <iostream>
#include <sstream>
#include <math.h>


using namespace std;

void Equilateral::SetAB(double value)
{
	if (value > 0)
		triangle.SetAB(value);
	else
		triangle.SetAB(0);
}

void Equilateral::SetBC(double value)
{
	if (value > 0)
		triangle.SetBC(value);
	else
		triangle.SetBC(0);
}

void Equilateral::SetAC(double value)
{
	if (value > 0)
		triangle.SetAC(value);
	else
		triangle.SetAC(0);
}


Equilateral::Equilateral(double a = 0, double b = 0, double c = 0)
{
	if ((a == b) && (a == c) && (b == c))
	{

		SetAB(a);
		SetBC(b);
		SetAC(c);
	}
	else
		SetAB(0);
	SetBC(0);
	SetAC(0);
}

Equilateral::Equilateral(const Equilateral& A)
{
	triangle = A.triangle;
}
Equilateral& Equilateral::operator = (const Equilateral& A)
{
	triangle = A.triangle;

	return *this;
}
ostream& operator << (ostream& out, const Equilateral& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Equilateral& A)
{
	double a, b, c;
	cout << "a = "; in >> a;
		A.SetAB(a);
		cout << "b = "; in >> b;
		A.SetBC(b);
		cout << "c = "; in >> c;
		A.SetAC(c);
	return in;
}
Equilateral::operator string() const
{
	return string();
}


Equilateral& Equilateral::operator ++ ()
{
	triangle++;
	return *this;
}
Equilateral& Equilateral::operator -- ()
{
	triangle--;
	return *this;
}
Equilateral Equilateral::operator ++ (int)
{
	Equilateral t(*this);
	triangle++;
	return t;
}
Equilateral Equilateral::operator -- (int)
{
	Equilateral t(*this);
	triangle--;
	return t;
}

double Equilateral::Square() const
{
	double a = triangle.GetAB();
	double S = (a * a * sqrt(3) * 1.) / 4;
	return S;
}
Equilateral operator * (Equilateral& triangle)
{
	Equilateral S(0);
 S  = (triangle.GetAB() * triangle.GetAB());
	return S;
}
Equilateral::~Equilateral(void)
{}
