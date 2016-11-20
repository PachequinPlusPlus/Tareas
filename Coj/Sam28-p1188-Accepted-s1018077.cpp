#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b;
	cin >> a >> b;
	int valueOne=a;
	int secondN=b;
	int contador = 0;
	while(valueOne > 0) {
	    secondN = b;
		int n = valueOne%10;
		while(secondN > 0) {
			int second = secondN%10;
			contador+= n*second;
			secondN = secondN/10;
		}
		valueOne=valueOne/10;
	}
	cout << contador << endl;
	
	return 0;
}