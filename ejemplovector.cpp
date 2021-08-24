// ejemplovector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h> 
#define MAX 100
#include "Vector.h"

using namespace std;


int main()
{
	int V[MAX],int n;
	cout<<"Digite el tamaño"<<endl;
	cin>>n;
	Vector vector1;
	vector1.cargarVector(V,n);
	vector1.mostrarVector(V,n); 
	cout<<"La suma es: "<<vector1.sumarVector(V,n)<<endl; 
	



	getch(); 
	return 0;
}
