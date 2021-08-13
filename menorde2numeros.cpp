#include<iostream>
#include<conio.h>
using namespace std;

int menor(int x, int y);

int main ()
{
	int n1,n2,min;
	cout<<"Digite 2 numeros:"<<endl;
	cin>>n1>>n2;
	min=menor(n1,n2);
	cout<<"El menor de los 2 es: "<<min<<endl;
	getch();
	return 0; 
}


int menor(int x, int y)
{int minimo;
	if(x<y)
	{
		minimo= x;
	}
	else
	{
		minimo= y;
	}
	return minimo;
}
