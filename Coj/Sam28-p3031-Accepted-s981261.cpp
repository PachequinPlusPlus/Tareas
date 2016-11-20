#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
int iA, iB, iEntero, iRemainder;

scanf("%d %d", &iA, &iB);


while(!(iA == 0 && iB == 0)) 
{

	iEntero = iA / iB;
	iRemainder = iA % iB;

	printf("%d %d / %d\n",iEntero, iRemainder, iB);
	scanf("%d %d", &iA, &iB);
}

    return 0;


}