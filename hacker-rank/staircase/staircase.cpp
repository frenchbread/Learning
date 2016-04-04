#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string printHash (int t, int n) {
    string hashes = "", hash = "#";
    string spaces = "", space = " ";
    int spacesCount;
    for (int j = 0; j < t; j++) {
        hashes += hash;
    }
    spacesCount = n - hashes.length();
    for (int n = 0; n < spacesCount; n++) {
        spaces += space;
    }
    return spaces + hashes;
}

int main(){
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << printHash(i+1, n) << endl;
    }
    
    return 0;
}
