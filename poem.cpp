/*
Author: Sumayia Rashid
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab9D

This program creates poems, but all dynamically allocated memory gets deleted when it is not needed. 
*/
#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();

        cout << *p << endl;

        delete p;
        // assume that the poem p is not needed at this point
    }
}