// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

int power(int base, int exponent) {
    if (exponent > 0) {
        return power(base, exponent - 1) * base;
    }
    return 1;
}

int powerI(int base, int exponent) {
    int product = 1;
    for (int i = 1; i <= exponent; i++) {
        product *= base;
    }
    return product;
}

int main() {

    cout << "Running..." << endl;

    printf("%d ", power(2, 6));
    printf("%d ", powerI(2, 6));



    return 0;
}