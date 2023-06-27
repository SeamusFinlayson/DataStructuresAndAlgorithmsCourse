// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int width;
};

void fun(struct Rectangle r) { // pass by value
    r.length = 20;
    cout << "Length: " << r.length << endl << "Width: " << r.width << endl; 
}

void fun2(struct Rectangle *p) { // pass by address
    p->length = 20;
    cout << "Length: " << p->length << endl << "Width: " << p->width << endl; 
}

struct Rectangle *fun3() {
    struct Rectangle *p;
    //p=new Rectangle; //C++ version
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    p->length = 15;
    p->width = 7;

    return p;
}

int main() {

    cout << "Running..." << endl;

    struct Rectangle r = {10,5};

    //pass by value does not change values in main
    cout << "**pass values**" << endl;
    fun(r);
    printf("Length %d\nWidth %d\n",r.length, r.width);

    //pass by address does change values in main
    cout << "**pass address**" << endl;
    fun2(&r);
    printf("Length %d\nWidth %d\n",r.length, r.width);

    //create struct on the heap using a function
    cout << "**create struct on heap**" << endl;
    struct Rectangle *ptr = fun3();
    cout << "Length: "<< ptr->length << endl << "Width: " << ptr->width <<endl;

    return 0;
}