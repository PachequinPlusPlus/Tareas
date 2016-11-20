#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	int iNumber;
	scanf("%d", &iNumber);
	string response = "A";
	string adding (iNumber*2*2, 'a');
	cout << response << adding << "h" << endl;

	return 0;
}