// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int width;
};


int main() {

    cout << "Running..." << endl;

    int a = 10; //create data variable
    int *p; //create pointer variable
    p = &a; // assign p the address of a

    // "*" and "&" operators
    cout << a << endl;
    printf("dereference of p is: %d\n", *p);
    printf("address at p is: 0x%X\n", p);
    printf("address of p is: 0x%X\n", &p);
    printf("\n");
    printf("value of a is %d\n", a);
    printf("address of a is 0x%X\n", &a);
    //printf("dereference of a is 0x%X\n", *a); // won't compile because it was not declared as pointer
    printf("\n");

    int A[5] = {2,4,6,8,10};
    p = A; //assign p address of array; note: "&"" not used

    for (int i = 0; i < 5; i++) {
        cout << p[i] << endl; // can be used as name of array
    }
    printf("\n");

    // use c to create array in heap
    p = (int *)malloc(5 * sizeof(int));
    p[0]=10;p[1]=15;p[2]=20;p[3]=25;p[4]=30;
    for (int i = 0; i < 5; i++)
        cout << p[i] << endl;
    printf("\n");

    //use c++ to create array in heap
    int *p2 = new int[5];
    p2[0]=11;p2[1]=16;p2[2]=21;p2[3]=26;p2[4]=31;
    for (int i = 0; i < 5; i++)
        cout << p2[i] << endl;
    printf("\n");\

    //heap memory should be deallocated when it is finished being used
    free(p); //c version
    delete [] p2; //c++ version
    // automatically deallocated when program is done
    //not needed in very short programs

    //size of pointers
    int *e1;
    char *e2;
    float *e3;
    double *e4;
    struct Rectangle *e5;

    cout << sizeof(e1) << endl;
    cout << sizeof(e2) << endl;
    cout << sizeof(e3) << endl;
    cout << sizeof(e4) << endl;
    cout << sizeof(e5) << endl;
    //all the same size

    return 0;
}