#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    
    int girls;
    cin >> girls;
    for (int j=0; j<girls; j++) {
        vector<int> puntaciones;
        int suma=0;

        for (int i=0; i<10; i++) {
            int number;
            cin >> number;
            puntaciones.push_back(number);
        }
        
        sort(puntaciones.begin(), puntaciones.end());
        
        for (int i=1; i<puntaciones.size()-1; i++) {
            suma+= puntaciones[i];
        }
        cout << j+1 << " " << suma << endl;
        
    }
    return 0;
}
