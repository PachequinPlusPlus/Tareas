#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long long iN;
	while(cin >> iN)
	{
		if (iN == 0)
		{
			break;
		}
		//Construir Binario
		long long toConvert = iN;
		int numbersOne=0;
		string binary;
		while(toConvert/2 > 0 || toConvert%2 != 0) {
			if (toConvert%2 ==0)
			{
				binary+= "0";
			}else {
				binary+= "1";
				numbersOne++;
			}
			toConvert/=2;
		}
		cout << "The parity of ";
		for(int i=binary.length()-1;i>=0;i--) {
			cout << binary[i];
		}
		cout << " is " << numbersOne << " (mod 2)." << endl;
	}

	return 0;
}