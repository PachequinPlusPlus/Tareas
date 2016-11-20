
#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    string mynumber;
    int mode=0;
    int iTests;
    cin >> iTests;
    while (iTests--) {
    cin >> mynumber;
    
    for (int i=0; i<mynumber.length(); i++) {
        if (i==0) {
            mode=(mynumber[i]-'0');
        }else{
            mode+=mynumber[i]-'0';
        }
                mode%=6;
        
        if(i == mynumber.length()-1 && mode == 0)
            cout << "YES" << endl;
        else if (i == mynumber.length()-1) {
            cout  << "NO" << endl;
        }

        if (mode != 0) {
                mode*=10;
        }
        
    
    }
    }
    return 0;
}
