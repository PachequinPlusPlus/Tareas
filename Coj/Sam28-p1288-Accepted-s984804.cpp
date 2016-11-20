#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
	int t;
	string n;
	cin>>t;
	getline(cin,n);
	while(t--)
	{
		//Using getline for this = WA, ffs.
		cin>>n;
		int last = n[n.length()-1] - '0';
		//cout<<"Last: "<<last<<endl;
		long long int sum = 0;
		for(int i = 0; i < n.length(); i++)
		{
			sum += n[i] - '0';
		}
		//cout<<"Sum: "<<sum<<endl;
		if(last % 2 == 0 && sum % 3 == 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}