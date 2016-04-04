#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    // Declare second integer, double, and String variables.
    int a; double b; string c1, c2;
    // Read and save an integer, double, and String to your variables.
    cin >> a;
    cin >> b;
    getline(cin, c1);
    getline(cin, c2);
    // Print the sum of both integer variables on a new line.
    cout << i + a << endl;
    // Print the sum of the double variables on a new line.
    cout << setprecision(1) << std::fixed << d + b << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + c2 << endl;
    return 0;
}
