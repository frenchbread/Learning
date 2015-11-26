//
//  sale.h
//  polymorth
//
//  Created by Damir Mustafin on 26/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#ifndef __polymorth__sale__
#define __polymorth__sale__

#include <cstdlib>
#include <iostream>
using namespace std;



class Sale
{
    friend bool operator < (const Sale& first, const Sale& second);
    
public:
    Sale();
    Sale(double thePrice);
    
    double getPrice() const;
    void setPrice(double newPrice);
    
    virtual double bill() const;
    
    double savings(const Sale& other) const;
    
private:
    double price;
};


#endif /* defined(__polymorth__sale__) */
