// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

double expTaylor(int x, int n) {

    static double factorial = 1;
    static double power = 1;
    double r;

    if(n == 0) {
        return 1;
    }
    else {
        r = expTaylor(x, n-1);
        power *= x;
        factorial *= n;
        return r + power/factorial;
    }

}

int main() {

    cout << "Running..." << endl;

    printf("%lf ", expTaylor(4, 35));

    return 0;
}