#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int iTests;
    cin >> iTests;
    
    for (int i=0; i<iTests; i++) {
        double myDouble = 0.0;
        
        int iStops;
        cin >> iStops;
        
        for (int j=0; j<iStops; j++) {
            
            myDouble+=0.5;
            myDouble*=2;
            
        }
        
        int myValue = int(myDouble);
        cout << myValue << endl;
        
    }
    return 0;
}
