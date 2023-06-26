// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

void fun(int A[], int n) { //arrays are always passed by address
    
    //does not give array size, gives size of pointer
    // cout << "array length: " << sizeof(A)/sizeof(int) << endl; 

    //also does not work, A is a pointer not an array
    // for (int x:A) {
    //     cout << x << endl;
    // }

    //array length needs to be passed separately
    for (int i=0; i<n; i++) {
        cout << A[i] << endl;
    }

    A[0] = 15;
}

void fun2(int *A, int n) { // "*" OR "[]" can be used in declaration

    //array length needs to be passed separately
    for (int i=0; i<n; i++) {
        cout << A[i] << endl;
    }

    A[0] = 15;
}

int * fun3(int size) {
    int *p;
    p = new int[size];

    for(int i = 0; i<size; i++) {
        p[i] = i+1;
    }

    return p;
}

int main() {

    cout << "Running..." << endl;

    int A[] = {2,4,6,8,10};
    int n = 5;

    // for (int x:A) {
    //     cout << x << endl;
    // }

    //cout << "array length: " << sizeof(A)/sizeof(int) << endl; 

    cout << "Initial Values: " << endl;

    //these function the same
    //fun(A, n);
    fun2(A,n);

    cout << "first value modified: " << endl;

    for (int x:A) {
        cout << x << endl;
    }

    cout << "constructed array: " << endl;

    int *ptr, sz = 5;
    ptr = fun3(sz);
    for(int i=0; i<sz; i++) {
        cout << ptr[i] << endl;
    }
    // for(int x:ptr) { // this does not work in main either
    //     cout << ptr << endl;
    // }

    return 0;
}