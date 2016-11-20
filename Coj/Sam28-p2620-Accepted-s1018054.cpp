#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int iNumber;
	scanf("%d", &iNumber);
	string response = "A";
	string adding (iNumber*2*2, 'a');
	printf("%s%sh\n", response.c_str(), adding.c_str());
	return 0;
}