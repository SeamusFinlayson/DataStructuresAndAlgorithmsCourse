// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    cout << "Running..." << endl;

    int a = 10;
    int &r = a; // reference declaration, must be initialized here, cannot be changed to reference another variable
    
    cout << "r is: " << r << endl;
    cout << "a is: " << r << endl;


    int b = 3;
    r = b; // a/r takes value of b
    //&r = b; //invalid syntax

    cout << "a is: " << r << endl;
    cout << "r is: " << r << endl;

    return 0;
}