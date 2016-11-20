#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    int number;
    string number_description;
    vector<int> tooHigh;
    vector<int> tooLow;
    while (cin >> number) {
        if (number == 0) {
            break;
        }
        
        cin.ignore();
        getline(cin, number_description);
        
        if (number_description == "right on") {
            int correctNumber = number;
            bool tooLowLie = false, tooHighLie = false;
            for (int i=0; i<tooLow.size(); i++) {
                if (tooLow[i] >= correctNumber) {
                    tooLowLie = true;
                }
                
            }
            
            for (int i=0; i<tooHigh.size(); i++) {
                if (tooHigh[i] <= correctNumber) {
                    tooHighLie = true;
                }
            }

                
                if (tooLowLie || tooHighLie) {
                    cout << "Stan is dishonest" << endl;
                }
                else {
                    cout << "Stan may be honest" << endl;
                }
                
                tooHigh.erase(tooHigh.begin(), tooHigh.end());
                tooLow.erase(tooLow.begin(), tooLow.end());
                
            
            
        
        }
        else if(number_description == "too high") tooHigh.push_back(number);
        else if(number_description == "too low") tooLow.push_back(number);
    }
    
    return 0;
}
