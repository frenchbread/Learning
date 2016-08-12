#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int num) {
    return ((num==1) || (num==0)) ? 1 : num * factorial(num-1);
}

int main() {
    int n;
    cin >> n;
    if ((n>=2) && (n<=12)) {
        cout << factorial(n) << endl;
    }
    return 0;
}

