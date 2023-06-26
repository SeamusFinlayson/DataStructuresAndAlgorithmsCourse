// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

int add(int a, int b) { //pass by value function
    int c = a + b;
    return c;
}

void swap (int *a, int *b) { //call by address
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap2 (int &a, int &b) { //call by reference
    int temp = a;
    a = b;
    b = temp;
}

void swap3 (int &a, int *b) { //call by address and reference
    int temp = a;
    a = *b;
    *b = temp;
}

int main() {

    cout << "Running..." << endl;

    //add function test
    int num1 = 10, num2 = 15, sum;
    sum = add(num1, num2);
    cout  << "sum is: " << sum << endl;

    //swap function test
    cout << "first swap" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    swap(&num1, &num2);
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    //swap2 function test
    cout << "second swap" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    swap2(num1, num2);
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    //swap3 function test
    cout << "third swap" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    swap3(num1, &num2);
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}