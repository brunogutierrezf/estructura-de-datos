#include <iostream>
#include"class1.h"
#include "string.h"
#define MAX 100

using namespace std;
int main(){


    int vec[MAX],vec2[MAX];
    double vec3[MAX];
      string opcion="si";
      while( opcion == "si")
	  {
       Class1 vectorX;
       cout<<endl;
        vectorX.menu();
         int x,n; cin>>x;
         if(x>=1 && x<=3){

         if(x==1){
            cout<<endl;
            cout<<"Digite el tamaño del vector : "; cin>>n;
            vectorX.cargarVector2(vec3,n);
            cout<<endl;
            cout<<"El minimo es : "<<(double)vectorX.minimo(vec3,n)<<endl;
            cout<<endl;
         }
         else if(x==2){
            cout<<endl;
            cout<<"Digite el tamaño del vector : "; cin>>n;
            vectorX.cargarVector(vec,n);
            cout<<endl;
            cout<<"Promedio : "<<(double)vectorX.promedio(vec,n)<<endl;
            cout<<endl;
         }
         else{
            cout<<endl;
            cout<<"Digite el tamaño del vector : "; cin>>n;
            vectorX.cargarVector(vec,n);
            vectorX.revertir(vec,vec2,n);
            cout<<endl;
         }
       }
         else{
            cout<<endl;
            cout<<"Esa opcion no existeeee >:v"<<endl;
         }
         cout<<endl;
         cout<<"Desea continuar ( si / no ) : "; cin>>opcion;

      }







    return 0;
}
