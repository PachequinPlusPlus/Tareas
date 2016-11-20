//
//  main.cpp
//  Average_12Months_Project
//
//  Created by Samuel Pacheco on 19/08/16.
//  Copyright © 2016 Samuel Pacheco. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    double dTotal = 0.0;
    
    
    for (int i=0; i<12; i++)
    {
        double dAValue;
        
        cin >>dAValue;
        dTotal += dAValue;
        
    }
    
    dTotal = dTotal / 12;
    
    cout << "$" << dTotal << endl;
    
    
    
    return 0;
}
