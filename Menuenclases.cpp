#include <iostream>
#include <conio.h>
#include "math.h"

using namespace std;

void area_triangulo();
int area_rectangulo(int base, int altura);
void ecuacion_cuadratica(int x, int y, int z );

int main()
{
    int a=0, b=0, h=0, op=0;
    int x, y, z;    
    cout<<"========================================"<<endl;
    cout<<"Practica de Funciones y Menu"<<endl;
    cout<<"========================================"<<endl;
    
    do{
        cout<<"1.- Area del triangulo"<<endl;
        cout<<"2.- Area del rectangulo"<<endl;
        cout<<"3.- Ecuacion Cuadratica (ax2 + bx + c)"<<endl;
        cout<<"4.- Salir"<<endl;
        cout<<"Elija una opcion: ";
        cin>>op;
        switch(op){
            case 1: 
                area_triangulo();
                break;
            case 2:
                cout<<"Ingrese la base del rectangulo: ";
                cin>>b;
                cout<<"Ingrese la altura del rectangulo: ";
                cin>>h;
                a=area_rectangulo(b,h);
                cout<<"El area del rectangulo es : "<<a<<endl;
                break;
            case 3:
                cout<<"Ingrese El valor de a: ";
                cin>>x;
                cout<<"Ingrese el valor de b: ";
                cin>>y;
                cout<<"Ingrese el valor de c: ";
                cin>>z;
                ecuacion_cuadratica(x,y,z);
                break;
            default:
                cout<<"Opcion no valida"<<endl;
                break;
        }
        
    }while(op != 4 );
    getch();
  return 0;
}

void area_triangulo(){
    int base=0, altura=0, area=0;
    cout<<"Ingrese la base del triangulo: ";
    cin>>base;
    cout<<"Ingrese la altura del triangulo: ";
    cin>>altura;
    area=(base * altura)/2;
    cout<<"El area del triangulo es : "<<area<<endl;
}

int area_rectangulo(int base, int altura){
    int area=0;
    area=base * altura;
    return area;
}

void ecuacion_cuadratica(int x, int y, int z ){
    double k1=0, k2=0;
    k1=(-y+sqrt(pow(y,2)-4*x*z))/ 2 * x;
    k2=(-y-sqrt(pow(y,2)-4*x*z))/ 2 * x;
    cout<<"El valor x1 = " <<k1<<endl;
    cout<<"El valor x2 = " <<k2<<endl;
}
