//
//  main.cpp
//  2722
//
//  Created by Samuel Pacheco on 11/11/16.
//  Copyright © 2016 Samuel Pacheco. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    long long int iYo;
    cin >> iYo;
    
    for (int i=0; i<10; i++) {
        iYo = (iYo*13821)%32768;
        int r;
        if ((iYo+1)%7 == 0) {
            r=7;
        }else {
            r = (iYo+1)%7;
        }
        cout << iYo << " : " << r  << endl;
    }
    
    
    return 0;
}
