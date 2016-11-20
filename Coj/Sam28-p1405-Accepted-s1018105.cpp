#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int iTests;
	cin >> iTests;
	while(iTests--) 
	{
		long long n;
		cin >> n;
		long long one = pow(n,3);
		long long two = pow(n, 2) * 6;
		long long three = n * 23;
		long long four = 18;
		n = (one- two + three - four)*n;
		n/=24;
		n+=1;
		cout << n << endl;
	}


	return 0;
}