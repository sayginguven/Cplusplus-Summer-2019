//
//  Time.hpp
//  basic101
//
//  Created by Saygin Guven on 2019-08-07.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class Time{
    
private:
    std::string day; // AM or PM
    int second;
    int minute;
    int hour;


public:
    std::string getDay();
    void setDay(std::string day);
    
    int getSecond();
    void setSecond(int second);
    
    int geMinute();
    void setMinute(int minute);
    
    int getHour();
    void setHour(int hour);
    
    //default constructor
    Time();
    //overloaded constructor
    Time(std::string day, int hour, int minute, int second);
    //default parameter for day is "AM"
    //if you instantiate your object with 2 parameters day will be automatically "AM"
    //if you instantiate your object with 3 parameters day will be assigned whatever the value is "AM" or "PM"
    Time(int hour, int minute, std::string day = "AM");
//    Time(int hour, int minute);
    
    
    ~Time();
    
    void whatTimeIsIt();
    void shortTime();
    
    
    
};

#endif /* Time_hpp */
