// Author: Seamus Finlayson

#include "L15 - Rectangle Class.h"

Rectangle::Rectangle(int length, int width) {
    this->length = length;
    this->width = width;
}

Rectangle::~Rectangle() {

}

int Rectangle::area() {
    return length * width;
}

int Rectangle::perimeter() {
    return 2*(length + width);
}

void Rectangle::setLength(int length) {
    this->length = length;
}
void Rectangle::setWidth(int width) {
    this->width = width;
}

// accessors
int Rectangle::getLength() {
    return length;
}

int Rectangle::getWidth()
{
    return width;
}
