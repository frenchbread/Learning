//
//  PFArray.h
//  templates
//
//  Created by Damir Mustafin on 10/12/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#ifndef PFArray_H
#define PFArray_H

namespace PFArrayS {
    
    template<class T>
    class PFArray {
    public:
        
        PFArray();
        
        PFArray(int capacityValue);
        
        PFArray(const PFArray<T>& pfaObject);
        
        void addElement(const T& element);
        
        bool full() const;
        
        int getCapacity() const;
        
        int getNumberUsed() const;
        
        void emptyArray();
        
        T& operator[](int index);
        
        PFArray<T>& operator =(const PFArray<T>& rightSide);
        
        virtual ~PFArray();
        
    private:
        T *a;
        int capacity;
        int used;
    };
}

#endif /* defined(__templates__PFArray__) */
