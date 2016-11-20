
#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, const char * argv[]) {
    
    
    string sMyWord;
    int iCurrent = 1;
    getline(cin, sMyWord);
    
    
    for (int i=0; i<sMyWord.length(); i++) {
        
        for (int j=0; j<26; j++) {
            if (sMyWord[i] == "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[j]) {
                iCurrent*= j+1;
                iCurrent%=26;
            }
        }
    }
    
    printf("%02d\n", iCurrent);
    
    return 0;
}
