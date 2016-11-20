#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int One,Two,Three;
    cin >> One >> Two >> Three;
    vector<int> myValues;
    myValues.push_back(One);
    myValues.push_back(Two);
    myValues.push_back(Three);
    
    sort(myValues.begin(), myValues.end());
    
    string desired;
    cin >> desired;
    
   int TOne, TTwo, TThree;
    
    if (desired[0] == 'A') TOne = myValues[0];
    else if(desired[0] == 'B') TOne = myValues[1];
    else if(desired[0] == 'C') TOne = myValues[2];
    
    if (desired[1] == 'A') TTwo = myValues[0];
    else if(desired[1] == 'B') TTwo = myValues[1];
    else if(desired[1] == 'C') TTwo = myValues[2];
    
    if (desired[2] == 'A') TThree = myValues[0];
    else if(desired[2] == 'B') TThree = myValues[1];
    else if(desired[2] == 'C') TThree = myValues[2];
    
    
    cout << TOne << " " << TTwo << " " << TThree << endl;
    return 0;
}
