//grupo 6 

#include<iostream>
#include "math.h"
using namespace std;
void arearectangulo();
void areacuadrado();
void areacirculo();
void areatriangulo();

int main (void)

{
int op;
op=0;
while(op !=5)
{
	cout<<"        M E N U "<<endl;
	cout<<"        --------"<<endl;
	cout<<" 1. Area Del resctangulo"<<endl;
	cout<<" 2. Area Del Cuadrado"<<endl;
	cout<<" 3. Area Del Circulo"<<endl;
	cout<<" 4. Area Del triangulo"<<endl;
	cout<<" 5. FIN"<<endl;
	cout<<"Opcion:"<<endl;
    cin>>op;
    switch(op)
	{
    	case 1:
		 {
    	   arearectangulo();
	    break; 
	    }
		case 2:
		{
			areacuadrado();
			  break;
		}
	    case 3:
		{
			areacirculo();
	          break;
		}
		case 4:
		 {
    	 areatriangulo();

	    break; 
	    }
    
    	case 5:
		{
		cout<<"Gracias"<<endl;
	    break;
	    }
    	default: cout<<"opcion no valida digite del 1 al 5"<<endl;  
    	
	}
	
}	
	return 0;
}


void arearectangulo()
{
float b,h,area;
cout<<"base y altura:"<<endl;
    	cin>>b>>h;
    	area=b*h;
    	cout<<"Area rectangular: "<<area<<endl;	
	
}
void areacuadrado()
{float a,area;
	cout<<"lado:";cin>>a;
	          area=a*a; cout<<"Area cuadrado:"<<area<<endl;
}
void areacirculo()
{ float area,a;
	cout<<"radio:";cin>>a;
	          area=3.1416*a*a; cout<<"Area circulo:"<<area<<endl;
}
void areatriangulo()
{float b,h,area;
	cout<<"base y altura:"<<endl;
    	cin>>b>>h;
    	area=(b*h)/2;
    	cout<<"Area del triangulo: "<<area<<endl;
}
