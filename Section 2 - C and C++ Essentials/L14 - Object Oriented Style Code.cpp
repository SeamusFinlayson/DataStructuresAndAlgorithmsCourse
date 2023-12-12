// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

class Rectangle {
    
    private:
    int length;
    int width;

    public:
    Rectangle(int length, int width) {
        this->length = length;
        this->width = width;
    }

    int area() {
        return length * width;
    }

    int perimeter () {
        return length * 2 + width * 2;
    }

    void setLength(int length) {
        this->length = length;
    }
};

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