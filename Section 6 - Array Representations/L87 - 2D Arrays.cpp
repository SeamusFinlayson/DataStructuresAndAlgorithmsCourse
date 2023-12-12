// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    cout << "Running..." << endl;

    // in stack
    int A[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    for (int i = 0; i < 3; i++) {
        for (int g = 0; g <4; g++) {
            printf("%d ", A[i][g]);
        }
        printf("\n");
    }

    // in stack and heap
    int *B[3];
    B[0] = (int *)malloc(4 * sizeof(int));
    B[1] = (int *)malloc(4 * sizeof(int));
    B[2] = (int *)malloc(4 * sizeof(int));

    // in heap
    int **C;
    C = (int **)malloc(3 * sizeof( int *));

    C[0] = (int *)malloc(4 * sizeof(int));
    C[1] = (int *)malloc(4 * sizeof(int));
    C[2] = (int *)malloc(4 * sizeof(int));

    //same syntax to access all arrays ie. A[i][g]

    return 0;
}