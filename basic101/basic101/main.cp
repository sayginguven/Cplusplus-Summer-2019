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


int main() {
    
    Beer<std::string> beer1("9 oz");
    std::cout << "the size of beer1 is : " << beer1.getSource() << std::endl;

    Beer<double> beer2(5.25);
    std::cout << "the price of beer2 is : " << beer2.getSource() << std::endl;

    Beer<double>* beer3 = new Beer<double>(5.0f);
    std::cout << "the persentage of alchohol for beer3 is : " << beer3->getSource() << std::endl;


    

}



