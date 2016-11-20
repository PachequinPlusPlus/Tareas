#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    int a;
    double area;
    while (cin >> a) {
        
        if (a == 0) {
            break;
        }
        area = pow(a, 2);
        double right = pow(a, 2);
        double down = sqrt(2) + 1;
        down = pow(down, 2);
        right = right/down;
        area = area - right;
        cout << fixed;
        cout << setprecision(3);
        cout << area << endl;
    }
    
    return 0;
}