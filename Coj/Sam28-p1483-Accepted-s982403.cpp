#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	string sFigure;

	cin >> sFigure;

	if (sFigure == "square")	
	{
		int iA;
		cin >> iA;
		cout << iA * iA << endl;
	}
	else if (sFigure == "rectangle")
	{
		int iA, iB;
		cin >> iA >> iB;
		cout << iA * iB << endl;
	}


	return 0;
}