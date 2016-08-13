//
//  sale.cpp
//  polymorth
//
//  Created by Damir Mustafin on 26/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include "sale.h"
using namespace std;

bool operator < (const Sale& first, const Sale& second) {
    return ( first.bill() < second.bill() );
}

Sale :: Sale(): price(0) { }

Sale :: Sale(double thePrice) {
    
    if (thePrice >= 0)
        price = thePrice;
    else
    {
        cout << "Error: Cannot have a negative price\n";
        exit(1);
    }
}

double Sale :: getPrice() const {

    return price;
}

void Sale :: setPrice(double newPrice) {

    if (newPrice >= 0)
        price = newPrice;
    else
    {
        cout << "Error: Cannot have a negative price\n";
        exit(1);
    }
}

double Sale :: bill() const {
    
    return price;
}

double Sale :: savings(const Sale& other) const {
    
    return ( bill() - other.bill() );
}

