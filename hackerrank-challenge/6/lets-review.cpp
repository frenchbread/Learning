#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int testCases, k, m;
    bool correct;
    string s, rs;
    char str[10000];
    cin >> testCases;
    if ((testCases > 0) && (testCases <=10)) {
        for (int i = 0; i < testCases; i++) {
            cin >> str;
            correct = true;
            for (k=1, m=strlen(str)-1;k<strlen(str); k++, m--) {
                if (abs(str[k] - str[k-1]) != abs(str[m]-str[m-1])) {
                    correct = false;
                    break;
                }
            }
            if (correct) {
                cout << "Funny" << endl;
            } else {
                cout << "Not Funny" << endl;
            }
        }
    }

    return 0;
}
