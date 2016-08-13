//
//  discount.cpp
//  polymorth
//
//  Created by Damir Mustafin on 26/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include "discount.h"

DiscountSale :: DiscountSale() : Sale(), discount(0) { } // init section

DiscountSale :: DiscountSale(double thePrice, double theDiscount) : Sale(thePrice), discount(theDiscount) { }

double DiscountSale :: getDiscount() const {
    
    return discount;
}

void DiscountSale :: setDiscount(double newDiscount){
    
    discount = newDiscount;
}

double DiscountSale ::  bill() const {
    
    double fraction = discount/100;
    double tmp      = (1-fraction) * getPrice();
    
    return tmp;
}


