// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    cout << "Running..." << endl;

    // Types of declarations
    int A[5];
    int B[5] = {2,4};
    int C[5] = {0}; // initialize with zeroes
    int D[] = {1,2,3,8,7,9}; // determine length based on assigned value

    if (B[2] == 2[B]) {
        printf("match\n"); // index can be outside of square brackets
    }

    if (B[2] == *(B+2)) {
        printf("match\n"); // index can be accessed with pointer for greater efficiency if the compiler doesn't optimize
    }

    // Use %x conversion specifier to print addresses
    return 0;
}