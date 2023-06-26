// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle {

    int length;
    int width;
};

int main() {

    cout << "Running..." << endl;

    //struct Rectangle r = {5,10}; need struct in C
    Rectangle r = {5,10}; //only valid in C++

    //for variable use dot operator
    cout << r.length << endl;
    cout << r.width << endl;
    cout << endl;

    Rectangle *p = &r;
    //for pointer use arrow operator
    cout << p->length << endl;
    cout << p->width << endl;
    cout << endl;

    //p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // C version
    p = new Rectangle; //C++ version

    p->length = 15;
    p->width = 7;
    cout << p->length << endl;
    cout << p->width << endl;
    cout << endl;

    return 0;
}