#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int iTests;
    scanf("%d", &iTests);
    while (iTests--) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        
        
        int differenceX = x2>x1? x2-x1: x1-x2;
        int differenceY = y2>y1? y2-y1: y1-y2;
        
       /* if (differenceY < 0) {
            differenceY*=-1;
        }
        if (differenceX < 0) {
            differenceX*=-1;
        }*/
        int toShow = differenceX+differenceY;
        printf("%d\n", toShow);
        
    }
    
    return 0;
}