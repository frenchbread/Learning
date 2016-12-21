#include <iostream>

using namespace std;

int countPages (int total,int page) {
    int count1 = 0;
    int count2 = 0;
    
    for (int i=0; i<=page; i+=2) {
        if ((page == i) || (page == i+1)) {
            break;
        }
        count1++;
    }
    
    if (total % 2 == 0) {
        for (int i=total; i>=page; i-=2) {
            if ((page == i) || (page == i+1)) {
                break;
            }
            count2++;
        }
    } else {
        for (int i=total; i>=page; i-=2) {
            if ((page == i) || (page == i-1)) {
                break;
            }
            count2++;
        }
    }
    
    return (count1 < count2) ? count1 : count2;    
}


int main(){
    int n;
    cin >> n;
    int p;
    cin >> p;
    // your code goes here
    if ((n <= 100000) && (p <= n)) {
        cout << countPages(n, p) << endl;
    }
    return 0;
}

