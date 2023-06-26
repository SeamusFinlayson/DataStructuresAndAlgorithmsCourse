// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle {

    int length;
    int width;
    char name; //compiler allocates 4 bytes for a total of 12
    /*this is called padding and it makes it easier for the machine to 
    read the whole structure at once*/
} r1, r2; //declare global variables 

struct Rectangle r3; //or declare them here

int main() {

    cout << "Running..." << endl;

    struct Rectangle r4 = {10,5};
    cout << "Rectangle size: " << sizeof(r4) << endl;

    r4.length = 4;
    r4.width = 9;

    cout << r4.length << endl;
    cout << r4.width << endl;

    return 0;
}