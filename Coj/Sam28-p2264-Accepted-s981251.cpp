#include <iostream>
using namespace std;

int main() {
    
    
    int x;
    int y;
    
    int xf;
    int yf;
    
    
    int Commands;
    
    
    
    cin >> x >> y;
    cin >> xf >> yf >> Commands;
    
    for (int i = 0; i < Commands; i++) {
        
        char Dirrecion;
        int Movimientos;
        
        cin >> Dirrecion >> Movimientos;
        
        if (Dirrecion == 'N' && Movimientos > 0) {
            
            xf = xf + Movimientos;
        }
        else if (Dirrecion == 'S' && Movimientos > 0) {
            xf = xf - Movimientos;
        }
        else if (Dirrecion == 'W' && Movimientos > 0) {
            yf = yf + Movimientos;
        }
        else if (Dirrecion == 'E' && Movimientos > 0) {
            yf = yf - Movimientos;
        }
        
        
    }
    
    cout << xf << " " << yf << endl;
    
    
    return 0;
}