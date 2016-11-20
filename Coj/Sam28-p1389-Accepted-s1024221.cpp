//
//  main.cpp
//  1389
//
//  Created by Samuel Pacheco on 07/11/16.
//  Copyright © 2016 Samuel Pacheco. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    string sNumber;
    cin >> sNumber;
    bool palindromo=false;
    string highestPalindrome;
    for (int i=0; i<sNumber.size(); i++) {
        palindromo=false;
        
        for (int j=sNumber.size()-1; j != i; j--) {
            int possiblej=0;
            if (sNumber[i] == sNumber[j]) {
                //Possible palindrome?
                int checking_One=i;
                int checking_two=j;
                while (checking_One != checking_two) {
                    possiblej+=2;
                    if (sNumber[checking_One] == sNumber[checking_two]) {
                        checking_One++;
                        checking_two--;
                    }
                    else {
                        break;
                        //This shit is not a palindrome
                    }
                    if (checking_One == checking_two || checking_One > checking_two) {
                        if (checking_two == checking_One) {
                            possiblej++;
                        }
                        palindromo=true;
                        break;
                    }
                }
                if (palindromo) {
                    if (highestPalindrome.size() < sNumber.substr(i,possiblej).size()) {
                        highestPalindrome = sNumber.substr(i,possiblej);
                    }
                }
            }
            else {
                //Check for next char
            }
        }
        
    }
    
    cout << highestPalindrome << endl;
    return 0;
}
