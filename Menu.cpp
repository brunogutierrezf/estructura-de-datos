// Trabajo: Calculadora multiuso


#include<iostream>
#include "math.h"
using namespace std;

int main (void)
{
int op,a,c,d,N,i; float b,h,area, B, x1, x2, R,C, x;
op=0;
while(op !=8)
{
	cout<<"        M E N U "<<endl;
	cout<<"        --------"<<endl;
	cout<<" 1. Area Del resctangulo"<<endl;
	cout<<" 2. Area Del Cuadrado"<<endl;
	cout<<" 3. Area Del Circulo"<<endl;
	cout<<" 4. Area Del triangulo"<<endl;
	cout<<" 5. Sucesion de Fibonacci "<<endl;
	cout<<" 6. Multiplicacion "<<endl;
	cout<<" 7. Ecuacion cuadratica "<<endl;
	cout<<" 8. FIN"<<endl;
	cout<<"Opcion:"<<endl;
    cin>>op;
    switch(op)
	{
    	case 1:
		 {
    	cout<<"base y altura:"<<endl;
    	cin>>b>>h;
    	area=b*h;
    	cout<<"Area rectangular: "<<area<<endl;
	    break; 
	    }
		case 2:
		{cout<<"lado:";cin>>a;
	          area=a*a; cout<<"Area cuadrado:"<<area<<endl;
			  break;
		}
	    case 3:
		{cout<<"radio:";cin>>a;
	          area=3.1416*a*a; cout<<"Area circulo:"<<area<<endl;
	          break;
		}
		case 4:
		 {
    	cout<<"base y altura:"<<endl;
    	cin>>b>>h;
    	area=(b*h)/2;
    	cout<<"Area del triangulo: "<<area<<endl;
	    break; 
	    }
        case 5:
       	{
    	d=1; c=1; 
	
      	cout<<"Cuantos nros. Fibonacii:"; cin>>N;
	    cout<<d<<endl<<c<<endl;
	    for(i=1;i<=N-2;i++)
	     {a= d + c; 
	       cout<<a<<endl;
	        d=c; c=a;
	     } 
	     break;
		}
    	case 6:
    	{
    	cout<<"Numeros a multiplicar "; cin>>a>>b;
    	cout<<"El resultado es: "<<a*b<<endl;
    	break;
    	}
		case 7:
    	{
    	cout<<"Digite a,b,c de la ecuacion ax^2+bx+c"<<endl; cin>>a>>b>>c;
    	   B=b*b-4*a*c;//dentro de la raíz de la formula
           if(a==0)
          { x=-c/b;
          cout<<"Solucion unica"<<x<<endl;
          }
          else
          {
	          if (B>=0)
	          {
               x1=(-b+sqrt(B))/(2*a);
	           x2=(-b-sqrt(B))/(2*a);//formula cuadratica terminada
	           cout<<"La solucion de la ecuacion es real"<<endl;
	           cout<<"x1="<<x1<<" y "<<"x2="<<x2<<endl;
	          }
	          else
	          { 
	          cout<<"La solucion de la ecuacion es compleja"<<endl;
	          R=-b/(2*a);//numero real
	          C=sqrt(-B)/(2*a);//numero complejo
	          cout<<R<<"+"<<C<<"i"<<endl;
	          cout<<R<<"-"<<C<<"i"<<endl;
	          }
          }
    	break;
    	}
    	case 8:
		{
		cout<<"Gracias"<<endl;
	    break;
	    }
    	default: cout<<"opcion no valida digite del 1 al 8"<<endl;  
    	
	}
	
}	
	return 0;
}
