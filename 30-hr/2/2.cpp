#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double mealCost;
    int tipPersent, taxPersent;
    double tip, tax, total;
    cin >> mealCost >> tipPersent >> taxPersent;
    tip = mealCost * tipPersent/100;
    tax = mealCost * taxPersent/100;
    total = mealCost + tip + tax;
    cout << "The total meal cost is " << round(total) <<" dollars." << endl;
    return 0;
}

