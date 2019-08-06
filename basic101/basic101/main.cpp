//
//  main.cpp
//  basic101
//
//  Created by Saygin Guven on 2019-07-29.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#include <iostream>
#include <string>
#include "functions.hpp"
#include "moreFunctions.hpp"
#include <vector>
#include <ctype.h>

#include "../OOP/Cat.hpp"

int main() {
    
    if(1==1){
        //default constructor will be called
        Cat delegatedCat{};
        delegatedCat.introduceYourself();
        delegatedCat.jump();
        
    }
    
    std::cout << "_____________" << std::endl;
    Cat fluffy("Fluffy", "Black and white", false, 10.4, 100);
    fluffy.introduceYourself();
    fluffy.eat();

    
    std::cout << "_____________" << std::endl;
    //C++11 syntax
    Cat sylvester {"Sylvester","White",true, 5.4,95};
    sylvester.introduceYourself();
    sylvester.sleep();
   
    std::cout << "_____________" << std::endl;
    Cat kit{"Homer", 100 };
    kit.introduceYourself();
    kit.eat();
    kit.jump();
    
    std::cout << "_____________" << std::endl;
    Cat copyFluffy(fluffy);
    copyFluffy.introduceYourself();
    
    
    std::cout << "_____________" << std::endl;

    return 0;
}



