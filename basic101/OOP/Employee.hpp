//
//  Employee.hpp
//  basic101
//
//  Created by Saygin Guven on 2019-08-08.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Time.hpp"

class Employee{
    
private:
    std::string name;
    Time *time;
    
public:
    
    Employee();
    Employee(std::string name, Time *time);
    Time* getTime();
    void setTime(Time *time);
};



#endif /* Employee_hpp */
