// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void printArray(int Array[], int length) {
    for(int i=0;i<length;i++) {
        printf("%d\n", Array[i]);
    }
}

int main() {

    cout << "Running..." << endl;

    //code here
    int *p, *q;

    p = (int *)malloc(3 * sizeof(int));
    p[0]=1;p[1]=2;p[2]=3;

    printArray(p, 3);

    q = (int *)malloc(9 * sizeof(int));
    
    memcpy(q, p, 3 * sizeof(int));
    // for (int i=0; i <3; i++) {
    //     q[i] = p[i];
    // }

    free(p);
    p = q;
    q = NULL;

    //printf("\n\n");

    p[4] = 7;
    p[6] = 78;

    printArray(p, 9);

    return 0;
}