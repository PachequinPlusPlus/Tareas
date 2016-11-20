#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	double first, second, third;
	while(cin >> first >> second >> third) {
	if (first == 0 && second == 0 && third == 0)
	{
		break;
	}
	vector<double> myDoubles;
	myDoubles.push_back(first);
	myDoubles.push_back(second);
	myDoubles.push_back(third);
	sort(myDoubles.begin(), myDoubles.end());

	double a = myDoubles[0] * myDoubles[0];
	double b = myDoubles[1] * myDoubles[1];
	double c = sqrt(a+b);
	if (c == myDoubles[2])
	{
		cout << "right" << endl;
	}
	else {
		cout << "wrong" << endl;
	}

}

}