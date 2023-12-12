// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int width;
};

void initialize (struct Rectangle *r, int length, int width) {
    r->length = length;
    r->width = width;
}

int area(struct Rectangle r) {
    return r.length * r.width;
}

int perimeter (struct Rectangle r) {
    return r.length * 2 + r.width * 2;
}

void changeLength(struct Rectangle *r, int length) {
    r->length = length;
}

int main() {

    cout << "Running..." << endl;

    struct Rectangle r;

    initialize(&r, 5, 10);
    cout << "Area: " << area(r) << endl;
    cout << "Perimeter: " << perimeter(r) << endl;

    changeLength(&r, 4);
    cout << "Area: " << area(r) << endl;
    cout << "Perimeter: " << perimeter(r) << endl;

    return 0;
}