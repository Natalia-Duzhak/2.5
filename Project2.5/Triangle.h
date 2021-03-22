//Triangle.h
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Triangle
{
private:
	double a;
	double b;
	double c;

public:
	double GetAB() const { return a; }
	double GetBC() const { return b; }
	double GetAC() const { return c; }

	void SetAB(double value);
	void SetBC(double value);
	void SetAC(double value);

	Triangle();
	Triangle(double, double, double);
	Triangle(const Triangle&);

	Triangle& operator = (const Triangle&);
	friend ostream& operator << (ostream&, const Triangle&);
	friend istream& operator >> (istream&, Triangle&);
	operator string() const;

	Triangle& operator ++ ();
	Triangle& operator -- ();
	Triangle operator ++ (int);
	Triangle operator -- (int);

	double Perimeter();
	double A();
	double B();
	double C();
	~Triangle();
};

