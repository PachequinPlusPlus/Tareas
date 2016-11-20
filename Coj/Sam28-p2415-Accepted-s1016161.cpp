#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {

    int itests;
    cin >> itests;
    
    for (int i=0; i<itests; i++) {
        
        int numbersofCakes;
        cin >>numbersofCakes;
        
        double suma=0;
        for (int j=0; j<numbersofCakes; j++) {
            double radius;
            cin >> radius;
            double height;
            cin >> height;
            double retain = M_PI;
            double doble = pow(radius, 2);
            doble*= height;
            doble*= retain;
            suma+= doble;
        }
        
        cout << fixed;
        cout << setprecision(2);
        cout << suma << endl;
        
    }

    return 0;


}
