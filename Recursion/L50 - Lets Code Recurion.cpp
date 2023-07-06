// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

void fun(int n) {
    if(n>0) {
        printf("%d ", n); // executes in ascending/calling phase  
        fun(n-1);
        printf("%d ", n); // executes descending/returning phase
    }
}

int main() {

    cout << "Running..." << endl;

    int x = 3;
    fun(3);

    return 0;
}