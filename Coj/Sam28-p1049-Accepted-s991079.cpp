#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int iNumber, iResult;
	bool isNegative = false;

	cin >> iNumber;
	if (iNumber<0)
	{
		iNumber *= -1;
		isNegative = true;
	}
	iResult = (iNumber*(iNumber + 1))/2;
	if (isNegative)
	{
		iResult *= -1;
		iResult += 1;
	}

	cout << iResult << endl;

	return 0;
}