//
//  main.cpp
//  basic101
//
//  Created by Saygin Guven on 2019-07-29.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#include "functions.hpp"
#include "moreFunctions.hpp"
#include <iostream>
#include "../OOP/Beer/Beer.hpp"
#include <list>
#include <stdexcept>
#include <vector>
#include <string>
#include <stdio.h>
#include <time.h>


std::string printMonth(int month){

    std::string months[12] {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    return months[month];
}


std::string printWeekDay(int weekDay){
    
    std::string weekdays[7] {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    return weekdays[weekDay];
    
}

std::string printDay(int day){
    
    if(day < 1 || day >31){
        throw std::logic_error("hmmmm thats a wrong day");
    }
    
    std::string days[31] = {
        "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth",
        "eleventh", "twelfth", "thirteenth", "fourteenth", "fifteenth", "sixteenth", "seventeenth", "eighteenth", "nineteenth", "twentieth",
        "twenty-first", "twenty-second", "twenty-third", "twenty-fourth", "twenty-fifth", "twenty-sixth", "twenty-seventh", "twenty-eighth", "twenty-ninth", "thirtieth",
        "thirty-first"
    };
    
    return days[day-1];
    
}



int main() {
    
    
    //mySuperTime<int,int,int> bday(1992,2,5);
   // mySuperTime<int,std::string,std::string> bday2(1992, "february", "fifth");
    
    
    try {
        time_t rawtime;
        struct tm * timeinfo;
        
        time ( &rawtime );
        timeinfo = localtime ( &rawtime );
        
        std::cout << timeinfo->tm_year+1900 << std::endl; // 2019-119 = 1900
        std::cout << printMonth(timeinfo->tm_mon) << std::endl; // 0 - Jan, 1 - Feb
        std::cout << printDay(timeinfo->tm_mday) << std::endl; // day of the month
//        std::cout << printDay(32) << std::endl; // day of the month

        std::cout << timeinfo->tm_hour << std::endl; // time hour
        std::cout << timeinfo->tm_min << std::endl; // time minute
        std::cout << timeinfo->tm_sec << std::endl; // time second
        std::cout << printWeekDay(timeinfo->tm_wday) << std::endl; // week day - monday tuesday
        std::cout << timeinfo->tm_yday << std::endl; // day of the year
    } catch (std::logic_error &ex) {
        std::cout << "ERROR : " << ex.what() << std::endl;
    }
    
    
}







