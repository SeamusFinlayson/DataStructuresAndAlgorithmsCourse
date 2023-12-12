// Author: Seamus Finlayson

#pragma once

#include <stdio.h>
#include <iostream>

using namespace std;

class Rectangle {

    private:
    int length;
    int width;

    //int area, perimeter;

    public:
    Rectangle(int length, int width);
    ~Rectangle();
    int area();
    int perimeter();

    // mutators
    void setLength(int length);  
    void setWidth(int width);

    // accessors
    int getLength();
    int getWidth ();
};