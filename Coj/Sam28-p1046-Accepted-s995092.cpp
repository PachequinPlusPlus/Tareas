#include <iostream>
using namespace std;
void calculate(int a, int b) {
	int iSuma = 0;

	for(int i = a; i<=b; i++){
		iSuma += (i)*(i+1)*(i+2)%100;
	}

	cout << iSuma%100 << endl;
}

int main(int argc, char const *argv[])
{
	
	int iTests;

	cin >> iTests;

	for (int i = 0; i < iTests; ++i)
	{
		int iA,iB;
		cin >> iA >> iB;

		calculate(iA, iB);
	}


	return 0;
}
