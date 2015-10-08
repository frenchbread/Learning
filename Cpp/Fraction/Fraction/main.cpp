//
//  main.cpp
//  Fraction
//
//  Created by Damir Mustafin on 02/10/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

class Fraction{
public:
    void setValues();
    double dividedNumerators();
    string lowestTerms();
private:
    double numerator;
    double denumerator;
};


int main(int argc, const char * argv[]) {

    Fraction fr;
    
    fr.setValues();
    
    cout << "Answer: -> " << fr.dividedNumerators() << "; " << fr.lowestTerms() << endl;
    
    return 0;
}

void Fraction::setValues(){
    
    cout << "Set a and b: ";
    cin >> numerator >> denumerator;
    
}

double Fraction::dividedNumerators(){
    return numerator/denumerator;
}

string Fraction::lowestTerms(){
    
    int val;
    
    val = gcd(numerator,denumerator);

    //cout << val;
    
    int x = numerator/val;
    int y = denumerator/val;
    
    return to_string(x) + "/" + to_string(y);
}

