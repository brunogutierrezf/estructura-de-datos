#pragma once
#define MAX 100
class Class1
{
private: 
	 int vec[MAX],vec2[MAX],n;
        double vec3[MAX];
public:
	Class1(void);
	~Class1(void);
	 void cargarVector(int vec[],int n);
         void cargarVector2(double vec[],int n);
        void revertir(int vec[],int vec2[],int n);
        double minimo(double vec3[],int n);
        double promedio(int vec[],int n);


        void menu();
	
};

