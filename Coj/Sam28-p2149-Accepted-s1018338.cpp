#include <iostream>
#include <ctype.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int iTests;
	cin >> iTests;
	while(iTests--){
		string word;
		cin >> word;
		int up=0;
		int down=0;
		for(int i=0;i<word.length();i++) {
			if (isupper(word[i]))
			{
				up++;
			}
			else {
				down++;
			}
		}
		if (up == down)
		{
			cout << "SI" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}


	return 0;
}