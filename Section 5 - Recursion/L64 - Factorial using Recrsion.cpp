// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

int factorial(int n) {
    if (n > 0) {
        return factorial(n - 1) * n;
    }
    return 1;
}

int factorialI(int n) { //I means iterative, non-recursive, loop execution
    int product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
    }
    return product;
}

int main() {

    cout << "Running..." << endl;

    printf("%d ", factorial(5));
    printf("%d ", factorialI(5));


    return 0;
}