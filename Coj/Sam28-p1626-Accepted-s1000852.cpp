#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int iNumberOne, iNumberTwo, myNewNumber;
    int times;
    scanf("%d", &times);
    
    while(times--){
        scanf("%d %d", &iNumberOne, &iNumberTwo);
        
        int n,n2, iResultOne = 0, iResultTwo = 0;
        n = iNumberOne;
        n2 = iNumberTwo;
        
        while (n != 0) {
            iResultOne = iResultOne*10 + n%10;
            n = n/10;
            
        }
        
        while (n2 != 0) {
            iResultTwo = iResultTwo*10 + n2%10;
            n2 = n2/10;
            
        }
        
        myNewNumber = iResultOne + iResultTwo;
        
        
        n = myNewNumber;
        iResultOne = 0;
        
        while (n != 0) {
            iResultOne = iResultOne*10 + n%10;
            n = n/10;
        }
        
        printf("%d\n", iResultOne);
        
        
        
        
    }
    return 0;
}