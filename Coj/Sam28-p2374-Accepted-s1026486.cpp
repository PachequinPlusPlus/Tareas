//
//  main.cpp
//  2374
//
//  Created by Samuel Pacheco on 11/11/16.
//  Copyright © 2016 Samuel Pacheco. All rights reserved.
//

#include <iostream>
#include <cstdlib>

using namespace std;
int main(int argc, const char * argv[]) {
    
    
    string One, two;
    
    cin >> One >> two;
    int sumaMenor=0;
    for (int i=0; i<One.length(); i++) {
        if (One[i] == '6') {
            One[i] = '5';
        }
        sumaMenor*=10;
        sumaMenor+= ((int)One[i]-48);
    }
    for (int i=0; i<two.length(); i++) {
        if (two[i] == '6') {
            two[i] = '5';
        }
    }
    sumaMenor+= atoi(two.c_str());
    cout << sumaMenor << " ";
    
    int sumaMayor=0;
    for (int i=0; i<One.length(); i++) {
        if (One[i] == '5') {
            One[i] = '6';
        }
        sumaMayor*=10;
        sumaMayor+= ((int)One[i]-48);
    }
    for (int i=0; i<two.length(); i++) {
        if (two[i] == '5') {
            two[i] = '6';
        }
    }
    
    sumaMayor+= atoi(two.c_str());
    
    cout << sumaMayor << endl;
    return 0;
}
