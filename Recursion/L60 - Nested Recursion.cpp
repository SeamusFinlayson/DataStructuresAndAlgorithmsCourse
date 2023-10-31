// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

int fun(int n) {
    if (n>100) {
        return n - 10;
    }
    else {
        return fun(fun(n + 11));
    }
}

int main() {

    cout << "Running..." << endl;

    cout << fun(99) << endl;

    return 0;
}