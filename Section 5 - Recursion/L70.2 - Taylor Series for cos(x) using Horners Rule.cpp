// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

double cosHornerI(int x, int n) {
    double result = 1;
    double xSquare = x * x;
    for (; n>0; n--) {
        int twiceN = 2*n;
        result = 1 - result * xSquare/((twiceN - 1) * twiceN);
    }
    return result;
}

double cosHorner(int x, int n) {
    static double result = 1;
    static double xSquare = x * x;
    if (n==0) {
        return result;
    } else {
        int twiceN = 2*n;
        result = 1 - result * xSquare/((twiceN - 1) * twiceN);
        return cosHorner(x, n-1);
    }
}

int main() {

    cout << "Running..." << endl;

    //code here
    printf("%4.9lf\n", cosHornerI(2, 1000000));
    printf("%lf\n", cosHorner(2, 60));

    return 0;
}