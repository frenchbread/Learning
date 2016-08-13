//
//  discount.h
//  polymorth
//
//  Created by Damir Mustafin on 26/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#ifndef __polymorth__discount__
#define __polymorth__discount__

#include "sale.h"
#include <stdio.h>


class DiscountSale : public Sale {
    
public:
    DiscountSale();
    DiscountSale(double thePrice, double theDiscount);
    
    double getDiscount() const;
    void setDiscount(double newDiscount);
    
    virtual double bill() const;
    
private:
    double discount;
    
};

#endif /* defined(__polymorth__discount__) */
