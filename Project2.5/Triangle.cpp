//Triangle.ccp
#include "Triangle.h"
#include <iostream> 
#include <sstream>
#include <math.h>

using namespace std;

void Triangle::SetAB(double value)
{
	if (value > 0)
		a = value;
	else
		a = 0;
}

void Triangle::SetBC(double value)
{
	if (value > 0)
		b = value;
	else
		b = 0;
}

void Triangle::SetAC(double value)
{
	if (value > 0)
		c = value;
	else
		c = 0;
}
Triangle::Triangle()
{
	a = 0;
	b = 0;
	c = 0;
}
Triangle::Triangle(double a=0, double b=0, double c=0)
{
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		SetAB(a);
		SetBC(b);
		SetAC(c);
		
	}
	else
	{
		SetAB(0);
		SetBC(0);
		SetAC(0);

	}

}
Triangle::Triangle( const Triangle& A)
{
	a = A.a;
	b = A.b;
	c = A.c;
}
Triangle& Triangle::operator = (const Triangle& A)
{
	this->a = A.a;
	this->b = A.a;
	this->c = A.a;

	return *this;
}
ostream& operator << (ostream& out, const Triangle& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Triangle& A)
{
	cout << "a = "; in >> A.a;
	cout << "b = "; in >> A.b;
	cout << "c = "; in >> A.c;
	return in;
}
Triangle::operator string() const
{
	stringstream sout;
	sout << "a = " << a << endl;
	sout << "b = " << b << endl;
	sout << "c = " << c << endl;
	return sout.str();
}
Triangle& Triangle::operator ++ ()
{
	a++;
	return *this;
}
Triangle& Triangle::operator -- ()
{
	a--;
	return *this;
}
Triangle Triangle::operator ++ (int)
{
	Triangle t(*this);
	a++;
	return t;
}
Triangle Triangle::operator -- (int)
{
	Triangle t(*this);
	a--;
	return t;
}
double Triangle::A()
{
	double A;
	A = acos(((b * b) + c * c - a * a) / (2 * c * b));
	return A;
}
double Triangle::B()
{
	double B;
	B = acos(((a * a) + c * c - b * b) / (2 * c * a));
	return B;
}
double Triangle::C()
{
	double C;
	C = acos(((b * b) + a * a - c * c) / (2 * a * b));
	return C;
}

double Triangle::Perimeter()
{
	return a + b + c;
}
Triangle::~Triangle(void)
{}
