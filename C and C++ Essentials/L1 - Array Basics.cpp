// Author: Seamus Finlayson

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int A[] = {2,4,6,8,10}; //determine size based on values
    int B[5] = {}; // assign size
    int C[5] = {0}; // assign size and initialize with zeros

    //get size
    // cout << "size is: " << sizeof(A) << endl;
    // cout << A[2] << endl;

    //print all elements
    // cout << "All elements: " << endl;
    // for(int x:A) {
    //     cout << x << endl;
    // }

    //get size
    cout << "Enter Size: ";
    int n;
    cin >> n;

    // give array size n and assign values
    int D[n] = {0};
    cout << "All elements: " << endl;
    for(int x:D) {
        cout << x << endl;
    }

    //create array with sze

    return 0;
}