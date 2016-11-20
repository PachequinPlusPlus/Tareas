#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	

	int iMountains;
	double iBiggestTemp;
	int mountain;

	cin >> iMountains;
	for (int i = 0; i < iMountains; ++i)
	{

		double iTemp;

		cin >> iTemp;
		if (iTemp >= iBiggestTemp)
		{
			iBiggestTemp = iTemp;
			mountain = i+1;
		}
	}

	cout << mountain << endl;

	return 0;
}