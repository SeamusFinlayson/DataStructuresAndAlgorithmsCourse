// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

double expHornerI(int x, int n) {
    double result = 1;
    for (;n > 0; n--) {
        result = 1 + (result * x/n);
    }
    return result;
}

double expHorner(int x, int n) {
    static double result = 1;
    if (n > 0) {
        result = 1 + (result * x/n);
        return expHorner(x, n-1);
    }
    return result;
}

int main() {

    cout << "Running..." << endl;

    //code here
    printf("%lf\n", expHornerI(4, 35));
    printf("%lf\n", expHorner(4, 35));

    return 0;
}