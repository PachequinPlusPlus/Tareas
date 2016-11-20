#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    
    int iW2;
    
    scanf("%d", &iW2);
    
    if (iW2%2 == 0 && iW2 != 2)
    {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    
    return 0;
    
}
