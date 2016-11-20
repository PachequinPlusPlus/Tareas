#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
			if(s % 5 == 0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
		{
			int s = n[0] - '0';
			if(s % 5 == 0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
		
	return 0;
}