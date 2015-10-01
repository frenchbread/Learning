//
//  main.cpp
//  HelloWorld
//
//  Created by Damir Mustafin on 14/09/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
using namespace std;

struct WeatherData
{
    int temperature;
    int windChill;
    int windSpeed;
};

int main() {
    
    WeatherData prediction = {1};
    
    cout << "temp " << prediction.temperature << endl;

    cout << "windChill " << prediction.windChill << endl;
    
    cout << "windChill " << prediction.windChill << endl;
    
    cout << "Ok" << endl;
    
    return 0;
}
