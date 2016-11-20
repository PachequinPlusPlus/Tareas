#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, const char * argv[]) {
    int iTests;
    scanf("%d", &iTests);
    
    while (iTests--) {
        int myCells[100];
        
        int cells, iIndx=0;
        scanf("%d", &cells);
        
        for (int i=1; i<=cells; i++) {
            myCells[i] = 1;
            iIndx++;
        }
        
        for (int i=1; i<=cells; i++) {
            if (i%2==0) {
                myCells[i] = 0;
            }

            iIndx++;
        }
        

        int rounds = cells-2;
        int each = 3;
        while (rounds--) {
            for (int i=1; i<=cells; i++) {
                if (i%each==0) {
                    myCells[i] == 1 ? myCells[i]=0:myCells[i]=1;
                }
            }
            each++;
        }
        
        int escape =0;
        for (int i=1; i<=cells; i++) {
            if (myCells[i]==1) {
                escape++;
            }
        }
        cout << escape << endl;
  
    
    }
    
    return 0;
}