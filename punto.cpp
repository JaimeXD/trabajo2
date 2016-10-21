#ifndef PUNTO_CPP_INCLUDED
#define PUNTO_CPP_INCLUDED
#include <iostream>

using namespace std;

class Point{
public:
    double x,y;

    Point( Point p[], int size){
        cout<<"elementos:"<<x<<"."<<y<<"\n"<<"tamaño:"<<size<<endl;
    }
    Point( Point &a){
        x=a.x;y=a.y;cout<<"recibio elementos:"<<x<<"."<<y<<endl;
    }


    void push_back(Point &p);
    void insert( int posicion, Point &p);
    void remove( int posicion);
    void getzide();
    void clean();
};


#endif // PUNTO_CPP_INCLUDED
