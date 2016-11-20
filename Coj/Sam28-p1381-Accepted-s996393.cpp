//
//  main.cpp
//  fast_fly
//
//  Created by Samuel Pacheco on 05/10/16.
//  Copyright © 2016 Samuel Pacheco. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main() {
    int iTets;
    float iDistance, iV1, iV2, iM, iT, iDistanciaMosca;
    
    cin >> iTets;
    for (int i=0; i<iTets; i++) {
        
        cin >> iDistance >> iV1 >> iV2 >> iM;
        
        float tiempo = iV1 + iV2;
        iT= iDistance/tiempo;
        iDistanciaMosca = iT * iM;
        cout << setprecision(2) << fixed <<  iDistanciaMosca << '\n';
        
        // 30t+ 30t = 60 
        //t=1
        //iM*t
    }
    
    
    
    return 0;
    
}