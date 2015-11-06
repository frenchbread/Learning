//
//  main.cpp
//  progProject3
//
//  Created by Damir Mustafin on 06/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;

bool isPalindrome(char* palindrome);

int main(int argc, const char * argv[]) {
    
    char str[80];
    
    cout << "Enter a string: " << endl;
    
    cin >> str;
    
    if (isPalindrome(str)){
        cout << "String is a palindrome." << endl;
    }else{
        cout << "String is not a palindrome." << endl;
    }
    
    return 0;
}

bool isPalindrome(char* palindrome)
{
    char* front;
    char* rear;
    
    front = palindrome;
    rear = (palindrome + strlen(palindrome)) - 1;
    
    while (front <= rear)
    {
        if (*front == *rear)
        {
            front++;
            rear--;
        }
        else
        {
            return false;
        }
    }
    return true;
}