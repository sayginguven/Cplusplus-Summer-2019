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

void calculateFuelConsumption(double kilometers, double liters){
    
    
    if(kilometers < 0){
        throw std::logic_error("kilometers must be positive");
    }
    if(liters == 0){
        throw std::invalid_argument("liters can not be 0");
    }
    
    if(kilometers > 10000){
        throw std::length_error("kilometers is too long!");
    }
    
    std::cout << "your fuel consumption is " << 100*(liters/kilometers) << " lt/ per 100km" << std::endl;
}

// function3 throws runtime error
void function3() {
    std::cout << "In function 3" << std::endl;
 // no try block, stack unwinding occurs, return control to function2
    throw std::runtime_error{"runtime_error in function3"}; // no print
}

// function2 invokes function3
void function2() {
    std::cout << "function3 is called inside function2" << std::endl;
    //function3(); // stack unwinding occurs, return control to function1
    
    //try and catch before return control to function1
    try{
        function3();
    } catch (std::exception &ex){
        std::cout << "exception handled in function 2"<<std::endl;
    }
    
    std::cout << "function2 ends" << std::endl;
}

// function1 invokes function2
void function1() {
    std::cout << "function2 is called inside function1" << std::endl;
    function2(); // stack unwinding occurs, return control to main
    std::cout << "function1 ends" << std::endl;
}

int main() {
 
    try {
        std::cout << "function1 is called inside main" << std::endl;
        function1(); // call function1 which throws runtime_error
    }
    catch (const std::runtime_error& error) { // handle runtime error
        std::cout << "Exception occurred: " <<  std::endl;
        std::cout << "Exception handled in main" << std::endl;
    }
    std::cout << "bye" << std::endl;


    while(true){
        try{
            std::cout << "how many kilometers you have travelled? " << std::endl;
            double km;
            std::cin >> km;
            std::cout << "how many lites of fuel you have filled?" << std::endl;
            double liters;
            std::cin >> liters;
            calculateFuelConsumption(km, liters); // error
        } catch (std::invalid_argument &ex){
            std::cout << ex.what() <<std::endl;
        } catch(std::logic_error &ex){
            std::cout << ex.what() <<std::endl;
        } catch(...){
            std::cout << " something is really wrong " <<std::endl;
        }
    }
    
    


}



