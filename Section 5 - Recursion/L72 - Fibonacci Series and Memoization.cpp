// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

int fibonacciI(int n) { // Iterative
    if (n <= 1) {
        return n;
    }   
    int sum, t0 = 0, t1 = 1;
    for (int i = 2; i <= n; i++) {
        sum = t0 + t1;
        t0 = t1;
        t1 = sum;
    }
    return t1;
}

int fibonacci(int n) { // Simple recursive
    // static int callCount = 0;
    // callCount++;
    // printf("call count: %d\n", callCount);
    if (n <= 1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int Fibonacci[10];

int fibonacciM(int n) { // Memoization recursive
    // static int callCount = 0;
    // callCount++;
    // printf("call count: %d\n", callCount);
    if (n <= 1) {
        Fibonacci[n] = n;
        return n;
    } else {
        if (Fibonacci[n-2] == -1) {
            Fibonacci[n-2] = fibonacciM(n-2);
        }
        if (Fibonacci[n-1] == -1) {
            Fibonacci[n-1] = fibonacciM(n-1);
        }
        Fibonacci[n] = Fibonacci[n-2] + Fibonacci[n-1];
        return Fibonacci[n];

    }
}

int main() {

    cout << "Running..." << endl;

    // init Fibonacci result array
    for (int i = 0; i<10; i++) {
        Fibonacci[i] = -1;
    }

    //code here
    printf("%d\n", fibonacciI(7));
    printf("%d\n", fibonacci(7));
    printf("%d\n", fibonacciM(7));
    printf("%d\n", fibonacciM(7)); // Faster than previous call because value was stored


    // printf("call count: %d\n", call)

    return 0;
}