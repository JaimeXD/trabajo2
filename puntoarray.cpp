#include "puntoarray.h"

using namespace std;

Pointarray::Pointarray(){
    this->points=new Point[0];
    this->_size=0;
}
Pointarray::Pointarray(Point p[],int _size){
    this->points=new Point[_size];
    int i;
    for(i=0;i<_size;++i)
        Point[i]=P[i];

}
void Pointarray::push_back( Point &p){
    int i;
    for(i=0;i<_size;++i)
        ;
    points[i]=p;

}
void Pointarray::resize(int x){
    Points *a;
    a=new Points[x];
    this->_size=x;
    for (int i=0;i<x;i++)
        a[i]=points[i];
    delete[] points;
    points=a;
}
void Pointarray::insert( int posicion,Point &p){
    resize(_size+1);
    for(int i=_size,i>posicion;i--)
        points[i]=points[--1];
    points[posicion]=p;
}
void Pointarray::remove( int posicion){
    int i=posicion+1;
    for(;i<_size;i++)
        points[i-1]=points[i];
    resize(_size-1)

}
void Pointarray::getzide(){
    int i;
    int a=0
    for(i=0;p[i]!='\0';++i){
        a+=1;
    }
    cout<<"el tamaño es:"<<a<<endl;
}
void Pointarray::clean(){
    for(int i=_size,i>posicion;i--)
        points[i]=0;
     resize(0);

}

