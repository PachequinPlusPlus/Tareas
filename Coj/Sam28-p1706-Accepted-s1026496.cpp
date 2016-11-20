//
//  main.cpp
//  1706
//
//  Created by Samuel Pacheco on 11/11/16.
//  Copyright © 2016 Samuel Pacheco. All rights reserved.
//

#include <iostream>
#include <vector>
#include <set>
using namespace std;

void checkDifferentmODS(int &lowestMode, vector<int> &ids) {
    set<int> mods;
    lowestMode=0;
    while (mods.size() != ids.size()) {
        lowestMode++;
        mods.erase(mods.begin(), mods.end());
        for (int i=0; i<ids.size(); i++) {
            mods.insert(ids[i]%lowestMode);
        }
    }
}

int main(int argc, const char * argv[]) {
    
    int iTests;
    
    cin >> iTests;
    
    while (iTests--) {
        int iNumberOfStudents;
        vector<int> SIN;
        cin >> iNumberOfStudents;
        int lowestMode=0;
        for (int i = 0; i<iNumberOfStudents; i++) {
            int k;
            cin >> k;
            SIN.push_back(k);
        }
        checkDifferentmODS(lowestMode, SIN);
        cout << lowestMode << endl;
    }
    
    return 0;
}
