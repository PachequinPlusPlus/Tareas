#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	string toReceive;
	cin >> toReceive;
	int acumulado=0;
	for (int i = 0; i < toReceive.length(); ++i)
	{
		int n = toReceive[i] - 'A' + 1;
		acumulado+= n;
	}
	cout << acumulado << endl;
	return 0;
}