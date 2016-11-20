#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	int t;
	cin>>t;
	string n;
	getline(cin,n);
	while(t--)
	{
		getline(cin,n);
		if(n.length() > 1)
		{
			string d = n.substr(n.length()-2, n.length());
			int s = atoi(d.c_str());
			if(s % 4 == 0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
		{
			int s = n[0] - '0';
			if(s % 4 == 0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
		
	return 0;
}