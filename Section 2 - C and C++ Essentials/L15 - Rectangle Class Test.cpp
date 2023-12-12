// Author: Seamus Finlayson

//compiling multiple files in vs code: https://www.youtube.com/watch?v=Ar40VjBW3-M&t=210s

#include <stdio.h>
#include <iostream>
#include "L15 - Rectangle Class.h"

using namespace std;

int main() {

    cout << "Running..." << endl;

    Rectangle r(5, 10);

    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    r.setLength(4);
    cout << "Area: " << r.area() << endl;

    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}