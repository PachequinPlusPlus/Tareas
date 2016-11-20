#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int n;
    string s;
    string ordenar;
    
    while (cin >> n && n != 0) {
        
        cin >> s;
        
        
        string solucion;
    
        int grupos = s.size()/n;
        
        for (int i=0; i<s.size(); i+=grupos) {
            
            ordenar= s.substr(i,grupos);
            reverse(ordenar.begin(), ordenar.end());
            solucion+=ordenar;
        }
        
        cout << solucion << endl;
        
    }
    return 0;
}
