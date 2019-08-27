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
#include <functional>
#include <vector>
#include <math.h>


//Lambda functions
void ForEachFunction(std::vector<int>& numbers, std::function<void(int)> func){
    
    for(int number : numbers){
        func(number);
    }

}

int main() {
    
    std::vector<int> numbers = {1,2,3,4,5,6,7,8,9,10};
    
    //if you want to
    int passByReference {0};
    int passByValue {0};
    ForEachFunction(numbers,[&passByReference, passByValue](int number) mutable{
        passByValue += 1;
        std::cout << "size of this vector is " << passByValue << std::endl;
        std::cout << "Value : " << passByReference << " " <<number << std::endl;
        passByReference +=1;
    });
    
    
    
    //challange
    
    //create a rectangle class
    // has lenght and width
    //create a foreach function with the same way we have created in the class
    // this function will have 2 parameters 1- vector or rectangles, 2-anonymous function
    // print the area of each rectangle
    
    
    

}
