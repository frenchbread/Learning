//
//  main.cpp
//  HelloWorld
//
//  Created by Damir Mustafin on 14/09/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
using namespace std;


class TimeStamp{
    public:
        void output();
        void input();
        void conversion();
        int hours24;
        int hours12;
        char AMorPM;
        int minutes60;
};

int main() {
    
    TimeStamp time;
    
    char c = 'Y' ;
    

    
    while( c != 'N' )
    {
        time.input();
        time.conversion();
        time.output();
        
        cout << "Continue? Press N if you want to quit. \n";
        cin >> c;
    }
    
    return 0;
}

void TimeStamp::input(){
    
    int hours;
    int minutes;
    
    cout << "Enter hours and minutes: ";
    cin >> hours >> minutes;
    
    hours24 = hours;
    minutes60 = minutes;
    

}

void TimeStamp::conversion(){
    
    if (hours24 > 11){
        
        AMorPM = 'P';
        hours12 = hours24 - 12;
        
    }else{
        AMorPM = 'A';
        hours12 = hours24;
    }
    

}

void TimeStamp::output(){

    cout << "Time is 12-hour time format: \n";
    cout << hours12 << ":" << minutes60 << " " << AMorPM << ".M.\n";
    
}