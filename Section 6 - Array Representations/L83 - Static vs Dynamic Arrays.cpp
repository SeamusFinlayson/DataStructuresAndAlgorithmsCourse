// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>
#include <stdlib.h> // standard library that contains malloc function

using namespace std;

int main() {

    cout << "Running..." << endl;

    //code here
    int A[5] = {2,4,6,8,10}; // stack array

    int *p;
    p=(int *)malloc(5*sizeof(int)); //heap array
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    for(int i;i<5;i++) {
        printf("%d\n", p[i]);
    }

    free(p); // free memory

    return 0;
}