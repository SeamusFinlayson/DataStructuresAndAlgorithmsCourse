// Author: Seamus Finlayson

#include <stdio.h>
#include <iostream>

using namespace std;

int y = 0; //gives same result as static declared in recursive function

int fun(int n) {
    
    static int x = 0;
    
    if(n>0) {

        x++;
        y++;
        return fun(n-1) + x; // + y; // using y here gives same result
    }

    return 0;
}

int main() {

    cout << "Running..." << endl;

    int r;
    r = fun(5);
    printf("%d\n", r);

    // calling again gives a different result because all instances share the same variable
    r = fun(5);
    printf("%d\n", r);

    return 0;
}