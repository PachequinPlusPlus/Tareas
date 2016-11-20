#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int iWeight;

	cin >> iWeight;
	if (iWeight%2 == 0 && iWeight >= 4)
	{
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}