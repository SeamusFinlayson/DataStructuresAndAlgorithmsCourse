// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

int fact(int n) {
    if(n==0)
        return 1;
    return fact(n-1) * n;
}

int nCr(int n, int r) { // Using formula
    int numerator, denominator;

    numerator = fact(n);
    denominator = fact(r) * fact(n-r);

    return numerator/denominator;
}

int NCR(int n, int r) { // Using Pascal's triangle

    if(r==0 || r==n) {
        return 1;
    }
    return NCR(n-1, r-1) + NCR(n-1, r);
}

int main() {

    cout << "Running..." << endl;

    //code here
    printf("%d\n", nCr(5,2));
    printf("%d\n", NCR(5,2));

    return 0;
}