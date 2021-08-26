#include "StdAfx.h"
#include "Class1.h"
#include <iostream>
using namespace std;

Class1::Class1(void)
{
}


Class1::~Class1(void)
{
}

void Class1::cargarVector(int vec[],int n){
    for(int i=0; i<n; i++){
        cout<<i<<"): ";
        cin>>vec[i];
    }

}
void Class1::cargarVector2(double vec3[],int n){
    for(int i=0; i<n; i++){
        cout<<i<<"): ";
        cin>>vec3[i];
    }

}
void Class1::revertir(int vec[],int vec2[],int n){
      int j=0;
     for(int i=n-1; i>=0; i--){
        vec2[j] = vec[i];
        j++;
     }
     cout<<"Vector revertido"<<endl;
     cout<<endl;
     cout<<"----->  ";
    for(int i=0; i<n; i++){
        cout<<vec2[i]<<' ';
    }
    cout<<endl;
}
double Class1::minimo(double vec3[],int n){
     double m = 99999;
    for(int i=0; i<n; i++){
        m = min(m,vec3[i]);
    }
     return m;
}
double Class1::promedio(int vec[],int n){
    double sum = 0;
     for(int i=0; i<n; i++){
        sum+=vec[i];
     }
      return sum/n;
}
void Class1::menu(){

    cout<<"<-----------------------Menu---------------------->"<<endl;
    cout<<"1. Minimo valor de un vector"<<endl;
    cout<<"2. Promedio de los valores de un vector"<<endl;
    cout<<"3. Revertir un vector"<<endl;
    cout<<endl;
    cout<<"Digite la opcion : ";

}
