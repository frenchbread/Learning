#include <iostream>
#include <map>
using namespace std;

int main() {  
    int n;
    string nStr;
    string key, val;
    map<string, string> phoneBook;
    
    getline(cin, nStr);
    n = stoi(nStr);
    
    for (int i=0; i<n; i++) {
        
        getline(cin, key, ' ');
        getline(cin, val);
        phoneBook[key] = val;
    }
    
    
    while(getline(cin, key)) {
        if ( phoneBook.find(key) != phoneBook.end() ) {
            cout << key << "=" << phoneBook[key] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }   
        
    return 0;
}
