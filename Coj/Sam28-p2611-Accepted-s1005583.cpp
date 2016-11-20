
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> result;
    int iMatches, iAvailableGoals, myPoints=0;
    scanf("%d %d", &iMatches, &iAvailableGoals);
    
    while (iMatches--) {
        int myGoals, TheirGoals;
        scanf("%d %d", &myGoals, &TheirGoals);
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
    printf("%d\n", myPoints);
    return 0;
}
