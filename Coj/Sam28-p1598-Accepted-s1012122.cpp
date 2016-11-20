
#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    int one,two, three;
    while (scanf("%d %d %d", &one, &two, &three) != EOF) {
        
        int a, b, c = one;
        int second=0;
        second = three-c;
        
        int middle = 0;
        middle = two-c;
        middle = middle*2;
        
        
        int tercero=0;
        tercero = second-middle;
        tercero/=2;
        a = tercero;
        b = two - a - c;
        
        //int i3=0, i4=0, i5=0;
        for (int i=3; i<6; i++) {
            int result = pow(i, 2);
            result*= a;
            result+= b*i;
            result+= c;
            cout << result << " ";
        }
        cout << endl;
    }
    
    return 0;
}
