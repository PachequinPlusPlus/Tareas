#include <iostream>
using namespace std;

void Process() {
	int iNg, iNm;

	cin >> iNg >> iNm;

	int iHighG = 0, iHighM = 0, dato;

	for (int i = 0; i < iNg; ++i)
	{
		cin >> dato;
		if (dato > iHighG)
		{
			iHighG = dato;
		}
	}
	for (int i = 0; i < iNm; ++i)
	{
	 	cin >> dato;
	 	if (dato > iHighM)
	 	{
	 		iHighM = dato;
	 	}
	}

	if (iHighG >= iHighM)
	{
		cout << "Godzilla" << endl;
	}
	else {
		cout << "MechaGodzilla" << endl;

	}

}

int main(int argc, char const *argv[])
{
	
	int iTests;

	cin >> iTests;

	for (int i = 0; i < iTests; ++i)
	{
		Process();
	}

	return 0;
}
