#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int a = 0;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        a += arr[i];
    }
    cout << a;
    return 0;
}
