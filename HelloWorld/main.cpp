//
//  main.cpp
//  HelloWorld
//
//  Created by Damir Mustafin on 14/09/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
using namespace std;


class DayOfYear{
public:
    void output();
    int month;
    int day;
};

int main() {
    
    DayOfYear today, birthday;
    
    cout << "Today's date \n";
    
    cout << "Enter today's month:\n";
    cin >> today.month;
    cout << "Enter today's day of the month:\n";
    cin >> today.day;
    
    cout << "You birthday's date \n";
    
    cout << "Enter month:\n";
    cin >> birthday.month;
    cout << "Enter day of the month:\n";
    cin >> birthday.day;
    
    cout << "Today's date is : ";
    today.output();
    cout << "\n";
    cout << "You birthday is : ";
    birthday.output();
    
    
    return 0;
}

void DayOfYear::output(){
    switch(month){
        case 1: cout << "January "; break;
        case 2: cout << "February "; break;
        case 3: cout << "March "; break;
        case 4: cout << "April "; break;
        case 5: cout << "May "; break;
        case 6: cout << "June "; break;
        case 7: cout << "July "; break;
        case 8: cout << "August "; break;
        case 9: cout << "September "; break;
        case 10: cout << "October "; break;
        case 11: cout << "November "; break;
        case 12: cout << "December "; break;
        default: cout << "Error";
    }
    
    cout << day;
}