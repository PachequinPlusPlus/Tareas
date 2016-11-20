//
//  main.cpp
//  3095
//
//  Created by Samuel Pacheco on 11/11/16.
//  Copyright © 2016 Samuel Pacheco. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

void createFib(long long int fib[]) {

    fib[0] = 0;
    fib[1] = 1;
    
    
    for(long long int i=2; i<60; i++) {
        fib[i] = (fib[i-1] + fib[i-2])%10;
    }
}

void getFibo(int &result, long long Inumber) {

    
    
}

int main(int argc, const char * argv[]) {
    
    long long iNumber;
    
    long long int myFib[61];
    createFib(myFib);
    while (cin >> iNumber) {
        cout << myFib[iNumber%60] << endl;
        
    }
    return 0;
}
