//
//  main.cpp
//  overloading
//
//  Created by Damir Mustafin on 22/10/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class Money{
public:
    Money();
    Money(double amount);
    Money(int theDollars, int theCents);
    Money(int theDollars);
    double getAmount() const;
    int getDollars() const;
    int getCents() const;
    friend const Money operator +(const Money& amount1, const Money& amount2);
    friend const Money operator -(const Money& amount1, const Money& amount2);
    friend bool operator ==(const Money& amount1, const Money& amount2);
    friend const Money operator -(const Money& amount);
    friend ostream& operator <<(ostream& outputStream, const Money& amount);
    friend istream& operator >>(istream& outputStream, Money& amount);
private:
    int dollars;
    int cents;
    int dollarsPart(double amount) const;
    int centsPart(double amount) const;
    int round(double number) const;
};

int main(int argc, const char * argv[]) {
    
    Money yourAmount, myAmount(1000, 90);
    cout << "Enter an amount of money: ";
    cin >> yourAmount;
    cout << "Your amount is " << yourAmount << endl;
    cout << "My amount is " << myAmount << endl;
    
    if (yourAmount == myAmount)
        cout << "We have the same amounts.\n";
    else
        cout << "One of us is richer.\n";
    
    Money ourAmount = yourAmount + myAmount;
    
    cout << yourAmount << " + " << myAmount << " equals " << ourAmount << endl;
    
    Money diffAmount = yourAmount-myAmount;

    cout << yourAmount << " - " << myAmount << " equals" << diffAmount << endl;
    
    return 0;
    
}

ostream& operator <<(ostream& outputStream, const Money& amount){
    
    int absDollars = abs(amount.dollars);
    int absCents = abs(amount.cents);
    
    if (amount.dollars < 0 || amount.cents < 0)
        outputStream << "$-";
    else
        outputStream << '$';
    outputStream << absDollars;
    
    if (absDollars >= 1000)
        outputStream << '.' << absCents;
    else
        outputStream << '.' << '0' << absCents;
    
    return outputStream;
}

istream& operator >>(istream& inputStream, Money& amount){
    
    char dollarSign;
    inputStream >> dollarSign;
    if (dollarSign != '$'){
        cout << "No dollar sign in Money input.\n";
        exit(1);
    }
    
    double amountAsDouble;
    
    inputStream >> amountAsDouble;
    
    amount.dollars = amount.dollarsPart((amountAsDouble));
    
    amount.cents = amount.centsPart(amountAsDouble);
    
    return inputStream;
    
}

const Money operator +(const Money& amount1, const Money& amount2){

    int allCents1 = amount1.getCents() + amount1.getDollars() * 100;
    int allCents2 = amount2.getCents() + amount2.getDollars() * 100;
    int sumAllCents = allCents1 + allCents2;
    int absAllCents = abs(sumAllCents);
    int finalDollars = absAllCents / 100;
    int finalCents = absAllCents % 100;
    
    if (sumAllCents < 0){
        finalDollars = -finalDollars;
        finalDollars = -finalDollars;
    }
    
    return Money(finalDollars, finalCents);
}

const Money operator -(const Money& amount1, const Money& amount2){
    
    int allCents1 = amount1.getCents() + amount1.getDollars() * 100;
    int allCents2 = amount2.getCents() + amount2.getDollars() * 100;
    int sumAllCents = allCents1 - allCents2;
    int absAllCents = abs(sumAllCents);
    int finalDollars = absAllCents / 100;
    int finalCents = absAllCents % 100;
    
    if (sumAllCents < 0){
        finalDollars = -finalDollars;
        finalDollars = -finalDollars;
    }
    
    return Money(finalDollars, finalCents);
}

bool operator ==(const Money& amount1, const Money& amount2){
    return ((amount1.getDollars() == amount2.getDollars()) && amount1.getCents() == amount2.getCents());
}

const Money operator -(const Money& amount){
    return Money(-amount.getDollars(), - amount.getCents());
}








