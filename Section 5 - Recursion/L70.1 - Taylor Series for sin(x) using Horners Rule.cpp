// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

double sinHornerI(int x, int n) {
    double result = 1;
    double xSquare = x * x;
    for (; n>0; n--) {
        int twiceN = 2*n;
        result = 1 - result * xSquare/(twiceN * (twiceN + 1));
    }
    result *= x;
    return result;
}

double sinHorner(int x, int n) {
    static double result = 1;
    static double xSquare = x * x;
    if (n==0) {
        return result * x;
    } else {
        int twiceN = 2*n;
        result = 1 - result * xSquare/(twiceN * (twiceN + 1));
        return sinHorner(x, n-1);
    }
}

int main() {

    cout << "Running..." << endl;

    //code here
    printf("%lf\n", sinHornerI(2, 35));
    printf("%lf\n", sinHorner(2, 35));

    return 0;
}