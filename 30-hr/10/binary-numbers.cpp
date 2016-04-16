#include <bitset>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

    int n;
    int counter = 0;
    cin >> n;
    int listIndex = 0;

    bitset<100> bin(n);
    vector<int> a(bin.size());

    for (int i = 0; i < bin.size(); i++) {

        if (bin[i] == 1) {
            counter++;
            a[listIndex]=counter;
        }

        if (bin[i] == 0) {
            listIndex++;
            counter = 0;
        }
    }

    cout << *max_element(a.begin(), a.end());

    return 0;
}
