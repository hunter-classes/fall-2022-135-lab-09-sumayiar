#include <iostream>
#include "funcs.h"
using namespace std; 

//Task A Function
double length(Coord3D *p){
    double length = sqrt(pow(p->x,2) + pow(p->y,2) + pow(p->z,2));
    return length;
}
//Task B Function
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if(length(p1) >= length(p2)){
        return p1;
    }
    else{
        return p2;
    }
}
//Task C Function
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if(length(p1) >= length(p2)){
        return p1;
    }
    else{
        return p2;
    }
}
//Task E Functions
Coord3D* createCoord3D(double x, double y, double z){
    Coord3D* ppos = new Coord3D;
    ppos->x = x;
    ppos->y = y;
    ppos->z = z;
    return ppos;
}

void deleteCoord3D(Coord3D *p){
    delete p;
}
