
#include <iostream>
#include <map>
#include <set>
#include <deque>
#include <algorithm>
#include <vector>
using namespace std;
// comparison, not case sensitive.
bool CompareStringCaseInsensitive(const string& lhs,const string& rhs){
    
    string::size_type common_length = std::min(lhs.length(),rhs.length());
    
    for(string::size_type i=0;i<common_length;++i){
        if(toupper(lhs[i]) < toupper(rhs[i]))return true;
        if(toupper(lhs[i]) > toupper(rhs[i]))return false;
    }
    
    if(lhs.length()<rhs.length())return true;
    if(lhs.length()>rhs.length())return false;//can ignore
    
    return false;//equal should return false
}
int main(int argc, const char * argv[]) {
    
    
    int a;
    while (cin >>a) {
        bool toOrder = false;
        multimap<int, string> labels;
        map<string, int> store;
        if (a == 0) {
            break;
        }
        for (int i=0; i<a; i++) {
            string label;
            int value;
            cin >> label >> value;
            store.insert(pair<string, int>(label, value));
            //labels[label] = value;
        }
        for (map<string, int>::iterator it = store.begin(); it != store.end()  ; it++ ) {
            string label = it->first;
            int key = it->second;
            labels.insert(pair<int, string>(key,label));
            
        }

        deque<string> toShow;
        //sort(labels.begin(), labels.end());
        for(multimap<int, string>::reverse_iterator it = labels.rbegin(); it != labels.rend(); it++) {
            
                string toAdd = it->second;
                
                pair<multimap<int, string>::iterator, multimap<int, string>::iterator> range;
                range = labels.equal_range(it->first);
                vector<string> addString;
                
                int u=0;
                for(multimap<int, string>::iterator k = range.first; k != range.second; k++) {
                    
                    if (u == 0) {
                        toAdd = k->second;
                        addString.push_back(toAdd);
                        u++;
                    }
                    else {
                        toAdd = k->second;
                        addString.push_back(toAdd);
                        it++;
                    }
                    
                }
                
              //  sort(addString.begin(), addString.end());
            //    range = labels.equal_range(it->first);
              
                //  pair<it, it> keyRange = labels.equal_range(it->first);
                //std::pair <std::multimap<int,string>::iterator, std::multimap<int,string>::iterator> ret;
                //ret = labels.equal_range(it->first);

            
                sort(addString.begin(), addString.end(), CompareStringCaseInsensitive);
            
                for (int i=0; i<addString.size(); i++) {
                    
                    if (toOrder) {
                        toShow.push_front(addString[i]);
                        toOrder = false;
                    }
                    else {
                        toShow.push_back(addString[i]);
                        toOrder = true;
                    }
                }

                
         
              //  toShow.push_back(toAdd);
                //toOrder = false;
           
            
     /*       else {
                string toAdd = it->second;
                toShow.push_front(toAdd);
                toOrder =true;
                
                string toAdd = it->second;
                
                pair<multimap<int, string>::iterator, multimap<int, string>::iterator> range;
                range = labels.equal_range(it->first);
                vector<string> addString;
                
                int u=0;
                for(multimap<int, string>::iterator k = range.first; k != range.second; k++) {
                    
                    if (u == 0) {
                        toAdd = k->second;
                        addString.push_back(toAdd);
                        u++;
                    }
                    else {
                        toAdd = k->second;
                        addString.push_back(toAdd);
                        it++;
                    }
                    
                }
                
                sort(addString.begin(), addString.end());
                for (int i=0; i<addString.size(); i++) {
    
                    if (toOrder) {
                        toShow.push_front(addString[i]);
                        toOrder = false;
                    }
                    else {
                    toShow.push_back(addString[i]);
                    toOrder = true;
                    }
                }
            }*/
            
        }
        
        for (int i=0; i<toShow.size(); i++) {
            cout << toShow[i] << " ";
        }
        cout << endl;
    }
    return 0;
}