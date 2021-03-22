//Equilateral.h
#pragma once
#include "Triangle.h"
#include <string>
#include <iostream>

using namespace std;

class Equilateral
{
private:
	Triangle triangle;
	double square;

public:
	double GetAB() const { return triangle.GetAB(); }
	double GetBC() const { return triangle.GetBC(); }
	double GetAC() const { return triangle.GetAC(); }

	void SetAB(double value);
	void SetBC(double value);
	void SetAC(double value);

	Equilateral(double, double, double);
	Equilateral(const Equilateral&);

	Equilateral& operator = (const Equilateral&);
	friend ostream& operator << (ostream&, const Equilateral&);
	friend istream& operator >> (istream&, Equilateral&);
	operator string() const;

	Equilateral& operator ++ ();
	Equilateral& operator -- ();
	Equilateral operator ++ (int);
	Equilateral operator -- (int);

	double Square() const;

	friend Equilateral operator * (const Equilateral);
	~Equilateral();
};
