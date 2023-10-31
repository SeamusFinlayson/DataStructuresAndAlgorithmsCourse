// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std; //must be declared before call in fun()

void funB(int n);

void funA (int n) {
    if (n > 0) {
        printf("%d ", n);
        funB(n-1);
    } 
}

void funB (int n) {
    if (n > 0) {
        printf("%d ", n);
        funA(n-1);
    } 
}

int main() {

    cout << "Running..." << endl;

    funA(5);

    return 0;
}