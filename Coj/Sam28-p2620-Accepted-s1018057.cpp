#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int iNumber;
	scanf("%d", &iNumber);
	string adding (iNumber, 'a');
	printf("A%s%s%s%sh\n", adding.c_str(), adding.c_str(), adding.c_str(), adding.c_str());
	return 0;
}