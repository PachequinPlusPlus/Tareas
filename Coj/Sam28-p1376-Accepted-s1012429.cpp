#include <bits/stdc++.h>
using namespace std;
int main(int argc, const char * argv[]) {
    
    string toReceive;
    char arr[508];
    cin >> toReceive;
    for (int i=0; i<toReceive.length(); i++) {
        arr[i] = toReceive[i];
    }
    sort(arr, arr+ toReceive.length());
    int contador = 0;
    do {
        contador+=1;
        if (strcmp(arr, toReceive.c_str()) > 0) {
            break;
        }
    } while (next_permutation(arr, arr + toReceive.length()));
    
    if (contador > 1 && arr[0] != 0) {
        cout << arr << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}
