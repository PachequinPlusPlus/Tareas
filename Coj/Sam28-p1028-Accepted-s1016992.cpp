
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string toCheck;
    string toCompare;
    while (cin >> toCheck) {
        cin >> toCompare;
        string result;
        int trying = 0;
        for (int i=0; i<toCompare.size(); i++) {
            if (trying != toCheck.size() && toCompare[i] == toCheck[trying]) {
                
                if (trying+1 != toCheck.size()+1) {
                    trying++;
                }
            }
            
        }
        
        if (trying == toCheck.size()) {
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
        
        
    }
    
    return 0;
}
