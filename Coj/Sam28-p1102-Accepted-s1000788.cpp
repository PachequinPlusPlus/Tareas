#include<iostream>
#include<string.h>

using namespace std;

int main() {
	char input[1000];
	int digits;
	int digit;
	int pares=0;
	int impares=0;
	int i;

	while (true) {
		cin >> input;
		digits = strlen(input);

		if (digits==1 and input[0] == '0') {
			break;
		}

		for (i=0; i<digits; i++) {
			digit = ((int)input[i])-48;
			if (i%2==0) {
				pares += digit;
			} else {
				impares += digit;
			}
		}

		if ((pares-impares)%11 == 0) {
			cout << input << " is a multiple of 11." << endl;
		} else {
			cout << input << " is not a multiple of 11." << endl;
		}

		pares = 0;
		impares = 0;
	}
	return 0;
}