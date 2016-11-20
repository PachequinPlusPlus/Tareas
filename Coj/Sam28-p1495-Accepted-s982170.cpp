
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    int iTests;
    vector<int> myNumbers;
    
    cin >> iTests;
    
    for (int i = 0; i < iTests; i++) {
        
        int iNumbers;
        cin >> iNumbers;
        
        myNumbers.push_back(iNumbers);
    }
    
    sort(myNumbers.begin(), myNumbers.end(), less<int>());
    
    for (int j = 0; j < myNumbers.size(); j++) {
        
        cout << myNumbers.at(j) << endl;
    }
    return 0;
}
