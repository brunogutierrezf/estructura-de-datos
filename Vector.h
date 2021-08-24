#pragma once
#define MAX 100 
class Vector
{
private: 
	int vec[MAX];
	int tam;
public:
	Vector(void);
	~Vector(void);
	void cargarVector(int vec[],int n);
	void mostrarVector(int vec[],int n);
	int sumarVector(int vec[],int n);
};
