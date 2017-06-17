#include<iostream>

using namespace std;

int remainder (int x) {
	return x % 11;
}

int main () {
	int x;
	cout << "Put a value:";
	cin >> x;
	cout << remainder(x) << endl;

	return 0;	
}
