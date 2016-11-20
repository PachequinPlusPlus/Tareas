
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
 
    cout << "n e" << endl;
    cout << "- -----------" << endl;
    
    cout<<0<<" "<<1<<endl;
    cout<<1<<" "<<2<<endl;
    cout<<2<<" "<<2.5<<endl;
    
    int factorial=2;
    double acumuladoAlv = 2.5;
    
    for (int i=3; i<10; i++) {
        factorial*=i;
        acumuladoAlv+= 1.0/factorial;
        cout<<i<<" "<<fixed<<setprecision(9)<<acumuladoAlv<<endl;

    }
    return 0;
}
