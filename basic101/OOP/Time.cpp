//
//  Time.cpp
//  basic101
//
//  Created by Saygin Guven on 2019-08-07.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#include "Time.hpp"


std::string Time::getDay(){
    return day;
}
void Time::setDay(std::string day){
    this->day = day;
}

int Time::getSecond(){
    return second;
}

void Time::setSecond(int second){
    this->second = second;
}

int Time::geMinute(){
    return minute;
}

void Time::setMinute(int minute){
    this->minute = minute;
}

int Time::getHour(){
    return hour;
}

void Time::setHour(int hour){
    this->hour = hour;
}

//default constructor
Time::Time() :
Time("AM", 0,0,0){
    
}
//overloaded constructor
Time:: Time(int hour, int minute, std::string day)
: Time(day,hour,minute,0){
    
}

//assign the valies to the properties automatically with : operator
//Time::Time(int hour, int minute)
//: hour{hour}, minute{minute}{
//    
//}

Time::Time(std::string day, int hour, int minute, int second){
    
    //check and convert the day to upper case
    std::locale loc;
    std::string temp;
    for (std::string::size_type i=0; i<day.length(); ++i)
        temp += std::toupper(day[i],loc);
    
    if(temp == "AM" || temp == "PM"){
        this->day = temp;
    } else{
        this->day = "AM";
    }
    
    if(second >=0 && second <60){
        this->second = second;
    } else{
        this->second = 0;
    }
    
    
    if(minute >=0 && minute <60){
        this->minute = minute;
    } else{
        this->minute = 0;
    }
    
    if(hour >=0 && hour <= 12){
        this->hour = hour;
    }else {
        this->hour = 0;
    }
    
}



Time::~Time(){
    
}

void Time::whatTimeIsIt(){
    //08            07               01                AM
    std::string formattedHour;
    std::string formattedMinute;
    std::string formattedSecond;

    formattedHour = std::to_string(hour);
    formattedMinute = std::to_string(minute);
    formattedSecond = std::to_string(second);
    
    // if the hour is 9 formattedHour will be 09
    if(hour < 10){
        formattedHour = "0" + std::to_string(hour);
    }
    
    if(minute < 10){
        formattedMinute = "0" + std::to_string(minute);
    }
    
    if(second < 10){
        formattedSecond = "0" + std::to_string(second);
    }
    
    std::cout << formattedHour << ":" << formattedMinute << ":" << formattedSecond << " " << day << std::endl;
    
}

void Time::shortTime(){
    //08            07               01                AM
    std::string formattedHour;
    std::string formattedMinute;

    
    formattedHour = std::to_string(hour);
    formattedMinute = std::to_string(minute);

    
    // if the hour is 9 formattedHour will be 09
    if(hour < 10){
        formattedHour = "0" + std::to_string(hour);
    }
    
    if(minute < 10){
        formattedMinute = "0" + std::to_string(minute);
    }
    
    std::cout << formattedHour << ":" << formattedMinute << " " << day << std::endl;
    
}
