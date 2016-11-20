#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int iTests;
	cin >> iTests;
	for (int i = 0; i < iTests; ++i)
	{
		int Number;
		int divisors=0;
		cin >> Number;
		for(int j=1;j<Number;j++) {
			if (Number%j == 0)
			{
				divisors+= j;
			}
		}

		if (divisors < Number)
		{
			cout << "Deficient" << endl;
		}
		else if(divisors == Number) {
			cout << "Perfect" << endl;
		}
		else {
			cout << "Abundant" << endl;
		}
	}

	return 0;
}