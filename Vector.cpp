#include "StdAfx.h"
#include "Vector.h"
#include <iostream>

using namespace std;

Vector::Vector(void)
{
}


Vector::~Vector(void)
{
}

void Vector::cargarVector(int vec[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout <<"Ingrese v[";i;"]= ";
		cin>> vec[i];
	}
}

void Vector::mostrarVector(int vec[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout <<"v[";i;"]= ";
		cout<<vec[i]<< endl;
	}
}

int Vector::sumarVector(int vec[],int n)
{
	int suma=0;
	for (int i=0;i<n;i++)
	{
		suma=suma + vec[i];
	}
	return suma;
}
