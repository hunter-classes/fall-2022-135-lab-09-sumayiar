#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
using namespace std;

int main(){
    //Task A
    Coord3D pointS = {20, 40, 60};
    cout << length(&pointS) << endl; 

    //Task B
    Coord3D pointP = {30, 60, 90};
    Coord3D pointQ = {-20, 21, -22};

    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    cout << "ans = " << ans << endl; 

    //Task C
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); 
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    
    return 0;
}
