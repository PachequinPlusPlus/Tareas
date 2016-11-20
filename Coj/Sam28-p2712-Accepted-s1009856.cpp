#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int itests;
    cin >> itests;
    vector<string> apellidos;
    int families =0;
    for (int i=0; i<itests; i++) {
        string first, second;
        cin >> first >> second;
        apellidos.push_back(second);
    }
    cin >> itests;
    for (int i=0; i<itests; i++) {
        string first, second;
        cin >> first >> second;
        
        for (int i=0; i<apellidos.size(); i++) {
            if (second == apellidos[i]) {
                families++;
            }
            
        }
        cout << families << endl;
        families=0;
    }
    return 0;
}