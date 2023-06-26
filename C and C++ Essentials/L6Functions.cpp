// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

int add(int a, int b); //declare here and define at bottom 
int subtract(int a, int b) { //or declare and define here
    int c = a - b;
    return c;
}

int main() {

    cout << "Running..." << endl;

    int num1 = 10, num2 = 15, sum;
    sum = add(num1, num2);
    cout  << sum << endl;

    return 0;
}

//definition of add
int add(int a, int b) {
    int c = a + b;
    return c;
}