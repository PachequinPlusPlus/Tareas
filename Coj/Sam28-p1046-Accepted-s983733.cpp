#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
   
    int iTests;
    cin >> iTests;
    
    for (int i = 0; i < iTests; i++) {
        
        int iA, iB;
        unsigned long int iResultado;
        iResultado = 0;
        cin >> iA >> iB;
        
        for (int i = iA; i <= iB; i++) {
            iResultado += (i)*(i+1)*(i+2);
            
        }
        
        cout << iResultado%100 << endl;
        
    }
    
    return 0;
}
