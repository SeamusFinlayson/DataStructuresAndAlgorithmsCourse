// Author: Seamus Finlayson

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