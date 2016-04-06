#include <vector>
#include <iostream>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    if ((testCases >= 1) && (testCases <=10)) {
        for(int i = 0; i < testCases; i++){
        int studentsCount;
        int threshold;
        int stutentsOnTime = 0;
        cin >> studentsCount >> threshold;
        if (((studentsCount >=1) && (studentsCount <= 1000)) &&
           ((threshold >=1) && (threshold <= studentsCount))) {
            vector<int> a(studentsCount);
            for(int j = 0;j < studentsCount;j++){
               cin >> a[j];
               if (a[j] <= 0) stutentsOnTime++;
            }
            if (stutentsOnTime >= threshold) 
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
            }
        }
    }
    
    return 0;
}

