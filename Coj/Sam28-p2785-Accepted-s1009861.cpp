#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
    float a=0;
    int iTests;
    scanf("%d", &iTests);
    for (int i=0; i<iTests; i++) {
        float b;
        cin >> b;
        a+=b;
    }
    a/=iTests;
    
    printf("%.2f\n", a);
    
    return 0;
}