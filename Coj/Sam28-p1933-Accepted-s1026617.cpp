//
//  main.cpp
//  1933
//
//  Created by Samuel Pacheco on 11/11/16.
//  Copyright © 2016 Samuel Pacheco. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int a, b;
    
    while (scanf("%d %d", &a, &b)) {
        if (a == 0 && b == 0) {
            break;
        }
        printf("%d\n", a+b);
    }
    
    return 0;
}
