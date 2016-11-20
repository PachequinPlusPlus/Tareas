#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    vector<int> result;
    int iMatches, iAvailableGoals, myPoints=0;
    cin >> iMatches >> iAvailableGoals;
    
    while (iMatches--) {
        int myGoals, TheirGoals;
        cin >> myGoals >> TheirGoals;
        result.push_back(myGoals-TheirGoals);
    }
    
    sort(result.rbegin(), result.rend());
    
    for (int i=0; i<result.size(); i++) {
        if (result[i] <= 0 && iAvailableGoals > 0) {
            while (result[i] <= 0 && iAvailableGoals > 0) {
                result[i]++;
                iAvailableGoals--;
            }
        }
        
    }
    
    for (int i=0; i<result.size(); i++) {
        if (result[i] > 0) {
            myPoints+=3;
        } else if (result[i] == 0) {
            myPoints++;
        }
        
        
    }
    cout << myPoints << endl;
    return 0;
}