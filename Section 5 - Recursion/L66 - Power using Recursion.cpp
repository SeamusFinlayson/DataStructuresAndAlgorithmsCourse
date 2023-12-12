// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

int power(int base, int exponent) {
    if (exponent > 0) { //!= or checking if 0 matches might be more efficient here
        return power(base, exponent - 1) * base;
    }
    return 1;
}

int powerI(int base, int exponent) {
    int product = base;
    for (int i = 2; i <= exponent; i++) {
        product *= base;
    }
    return product;
}

//more efficient power function, fewer multiplications
int power2(int base, int exponent) { 
    if (exponent == 0) {
        return(1);
    }
    if (exponent%2 == 0) {
        return power2(base*base, exponent/2);
    }
    else {
        return base*power2(base*base, (exponent-1)/2);
    }
}

int power2I(int base, int exponent) {

    //determine if product should be squared or multiplied by the base at each step
    int square[exponent]; // Maximum array length is equal to the exponent, could be shorter
    int i = -1;
    for (; exponent > 0;) {
        i++;

        if ((exponent)%2 == 0) {
            square[i] = 1;
            exponent /= 2;
        }
        else {
            square[i] = 0;
            exponent--;
        }

        //printf("%d, ", square[i]);
    }
    //printf("\n");

    //iterate backwards through array and square or multiply as specified
    int product = 1;
    for(;i>=0;i--) {
        if (square[i] == 1) {
            product *= product;
        }
        else {
            product *= base;
        }
        //printf("product: %d\n", product);
    }

    return product;
}

int main() {

    cout << "Running..." << endl;

    // printf("%d ", power(2, 6));
    // printf("%d ", powerI(2, 6));
    // printf("%d ", power2(2, 6));
    // printf("%d ", power2(2, 7));

    // Testing for power2I correctness
    int someFailed = 0;
    for (int i = 40; i >= 0; i--) {
        if (!(power(2, i) == power2I(2, i))) {
            printf("fail at: %d\n", i);
            someFailed = 1;
        }
    }
    if (!someFailed) {
        printf("All tests passed");
    }

    return 0;
}