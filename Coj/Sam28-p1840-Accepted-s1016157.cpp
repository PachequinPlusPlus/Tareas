#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int itests;
    cin >> itests;
    
    for (int i=0; i<itests; i++) {
        string toCheck;
        cin >> toCheck;
        bool secure=true;
        int contadorB = 0;
        int contadorR = 0;
        int contadorO = 0;
        int contadorK = 0;
        int contadorE = 0;
        int contadorN = 0;
        for (int i=0; i<toCheck.size(); i++) {
            
            if (toCheck[i] == 'B') {
                contadorB++;
            }else if(toCheck[i] == 'R'){
                contadorR++;
            }else if(toCheck[i] == 'O'){
                contadorO++;
            }else if(toCheck[i] == 'K'){
                contadorK++;
            }else if(toCheck[i] == 'E'){
                contadorE++;
            }else if(toCheck[i] == 'N'){
                contadorN++;
            }
        }
        
        if (contadorB==contadorR && contadorR == contadorO && contadorO == contadorK && contadorK == contadorE && contadorE == contadorN) {
            secure=false;
        }
        if (secure) {
            cout << "Secure" << endl;
        }else {
            cout << "No Secure" << endl;
        }
        
    }
    return 0;
}