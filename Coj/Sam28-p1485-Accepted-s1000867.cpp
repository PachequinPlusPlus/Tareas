#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    
    ios_base::sync_with_stdio(false);
    cin.tie();
    
    vector<char> mychars;
    string c;
    cin >> c;
    for (int i=0; i<c.size(); i++) {
        mychars.push_back(c[i]);
    }
    sort(mychars.begin(), mychars.end());
    string result;
    for (int i =0; i<mychars.size(); i++) {
        result = result + mychars[i];
    }
    printf("%s\n", result.c_str());

    
    return 0;
}
