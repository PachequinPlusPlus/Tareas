
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    int iTests;
    cin>>iTests;
    string sString="";
    char p;
    int j=0;
    while (getline(cin,sString)) {
        
        if (j==0) {
            iTests=atoi(sString.c_str());
            j++;
        }else {
        int even=0, odd=0;
        for (int i=0; i<sString.length(); i++) {
            p=sString.at(i);
            if ((int(p)%2) == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
        
        if(even > odd)
            cout << "Even";
        else
            cout << "Odd";
            
            cout << endl;
        
        iTests--;
        
        if (iTests==0) {
            break;
        }
        
        }
    }
    return 0;
}
