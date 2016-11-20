
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    string one;
    string two;
    cin >> one >> two;
    
    //Encontrar los que hay en A Y no en B
    vector<char> enAyNoB;
    vector<char> enAyEnB;
    for (int i=0; i<one.size(); i++) {
        bool letraenB = false;
        for (int j=0; j<two.size(); j++) {
            
            if (one[i] == two[j]) {
                letraenB=true;
            }
        }
        
        if (!letraenB) {
            enAyNoB.push_back(one[i]);
        }
        else{
            enAyEnB.push_back(one[i]);
        }
        
    }
    
    cout << "First:";
    for (int i=0; i<enAyNoB.size(); i++) {
        
        cout << enAyNoB[i];
    }
    cout << endl;
    
    
    
    
    //Encontrar los que hay en A Y no en B
    vector<char> enByNoA;
    for (int i=0; i<two.size(); i++) {
        bool letraenB = false;
        for (int j=0; j<one.size(); j++) {
            
            if (two[i] == one[j]) {
                letraenB=true;
            }
        }
        
        if (!letraenB) {
            enByNoA.push_back(two[i]);
        }
        else{
        }
        
    }
    
    
    cout << "Second:";
    for (int i=0; i<enByNoA.size(); i++) {
        
        cout << enByNoA[i];
    }
    cout << endl;
    
    cout << "First&Second:";
    for (int i=0; i<enAyEnB.size(); i++) {
        
        cout << enAyEnB[i];
    }
    cout << endl;


    
    
    return 0;
}
