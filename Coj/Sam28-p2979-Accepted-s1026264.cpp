//
//  main.cpp
//  2979
//
//  Created by Samuel Pacheco on 11/11/16.
//  Copyright © 2016 Samuel Pacheco. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    int iTests;
    cin >> iTests;
    
    while (iTests--) {
        
        int iNumbers;
        cin >> iNumbers;
        
        vector<int> currentNumbers;
        vector<int> orderedNumbers;
        
        int iNumberWorking;
        for(int i=0;i<iNumbers;i++){
            cin >> iNumberWorking;
            currentNumbers.push_back(iNumberWorking);
        }
        
        orderedNumbers = currentNumbers;
        sort(orderedNumbers.begin(), orderedNumbers.end());
        
        int iChanges=0;
        for (int i=0; i<orderedNumbers.size(); i++) {
            if (orderedNumbers[i] != currentNumbers[i]) {
                iChanges++;
            }
            
        }
        cout << iChanges << endl;
    }
    return 0;
}
