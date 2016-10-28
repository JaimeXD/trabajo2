#ifndef PUNTOARRAY_H_INCLUDED
#define PUNTOARRAY_H_INCLUDED

#include <iostream>
#include "punto.h"
using namespace std;

class Pointarray{
private:
    int _size;
    Point *points;
    void rezise(int n);
public:
    Pointaray();
    Pointarray( Point p[], int _size);
    Pointarray( Point &a);


    void push_back(Point &p);
    void insert( int posicion, Point &p);
    void remove( int posicion);
    void getzide();
    void clean();
};


#endif // PUNTOARRAY_H_INCLUDED

