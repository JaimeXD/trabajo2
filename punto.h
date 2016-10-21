#ifndef PUNTO_H_INCLUDED
#define PUNTO_H_INCLUDED
#include "punto.cpp"
#include <iostream>

using namespace std;

void Point::push_back( Point &p){
    int i;
    for(i=0;*a[i]!='\0';++i)
            ;
    *a[i]=*p;
    count<<*a[i]<<endl;
}
void Point::insert( int posicion){
}
void Point::remove( int posicion){
    int i;
    int *a=&p;
    for(i=0;*a[i]!='\0';++i)
        if(i==posicion)
            a[i]=a[i+1];

}
void Point::getzide(){
    int i;
    int a=0
    for(i=0;p[i]!='\0';++i){
        a+=1;
    }
    cout<<"el tamaño es:"<<a<<endl;
}
void Point::clean(){

}
#endif // PUNTO_H_INCLUDED
