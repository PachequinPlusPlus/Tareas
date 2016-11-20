#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string toDecode, one, two;
    cin >> toDecode;
 
    string firstHalf = toDecode.substr(0,toDecode.length()/2);
    for (int i=firstHalf.size()-1; i>=0; i--) {
        one = one + firstHalf[i];
    }
    if (toDecode.size()%2 != 0) {
        one = one + toDecode[toDecode.size()/2];
    }
    string secondHalf = toDecode.substr(toDecode.length()%2 == 0 ? toDecode.length()/2:toDecode.length()/2+1, toDecode.length()-1);
    for (int i=secondHalf.size()-1; i>=0; i--) {
        two = two + secondHalf[i];
    }
    
    cout << one + two << endl;
    return 0;
}
