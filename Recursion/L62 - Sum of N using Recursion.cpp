// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

int sumOfN(int n) {
    if (n > 0) {
        return n + sumOfN(n - 1);
    }
}

int sumOfNIter(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {

    cout << "Running..." << endl;

    printf("%d ", sumOfN(5));
    printf("%d ", sumOfNIter(5));


    return 0;
}