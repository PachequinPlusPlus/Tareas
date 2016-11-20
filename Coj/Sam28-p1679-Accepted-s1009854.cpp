#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int times, highest=0;
    vector<string> names;
    vector<double> resultados;
    int winer;
    cin>>times;
    for (int i=0; i<times; i++) {
        string name;
        double pa;
        double pj;
        double g;
        double a;
        double ta;
        double tr;
        cin >> name >> pa >> pj >> g >> a >> ta >> tr;
        names.push_back(name);
        
        double first = log(pa);
        first = first + pj + (2*g) + a - (ta+2*tr);
        
        resultados.push_back(first);
    }
    
    for (int i=0; i<resultados.size(); i++) {
        if (resultados[i] > highest) {
            highest = resultados[i];
            winer=i;
        }
        
    }
    
    cout << names[winer] << endl;
    
    return 0;
}