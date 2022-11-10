#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
using namespace std;

int main(){
    //Task A
    Coord3D pointS = {20, 40, 60};
    cout << length(&pointS) << endl; 

    return 0;
}
