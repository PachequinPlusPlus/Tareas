#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int lado=0, squares=0, rect=0, times =0;
    while (scanf("%d", &lado) != EOF) {
        times=lado;
        squares=0;
        rect=0;
        while (times) {
            squares+= times*times;
            rect+= (times*times*times);
            times--;
        }
        cout << squares << " " << rect << endl;
        
    }
    return 0;
}