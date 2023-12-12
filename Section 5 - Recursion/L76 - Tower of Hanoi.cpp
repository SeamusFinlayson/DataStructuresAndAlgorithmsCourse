// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

void towerOfHanoi(int n, char from, char Using, char to) {
    if (n>0) {
        towerOfHanoi(n-1, from, to, Using);
        printf("Move disk from %c to %c\n", from, to);
        towerOfHanoi(n-1, Using, from, to);
    }
}

int main() {

    cout << "Running..." << endl;

    //code here
    towerOfHanoi(3, 'A', 'B', 'C');

    return 0;
}