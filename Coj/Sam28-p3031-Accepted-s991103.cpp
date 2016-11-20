#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	int iA, iB;
	int iEntero, iNumerador;

	scanf("%d %d", &iA, &iB);
	while(!(iA == 0 && iB == 0)) {
		
			iEntero = iA/iB;
			iNumerador = iA%iB;
			printf("%d %d / %d\n",iEntero, iNumerador, iB);
		
		scanf("%d %d", &iA, &iB);


	}


	return 0;
}

