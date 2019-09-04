//
//  IceCream.cpp
//  basic101
//
//  Created by Saygin Guven on 2019-09-04.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#include "IceCream.hpp"


IceCream::IceCream(){
        this->flavor = "vanilla";
        std::cout <<"Icecream is created with " << this->flavor << std::endl;
    }
    
IceCream::IceCream(std::string flavor){
        this->flavor = flavor;
        std::cout <<"Icecream is created with " << this->flavor << std::endl;
    }
    
std::string IceCream::getFlavor(){
        return this->flavor;
    }
    
void IceCream::setFlavor(std::string flavor){
        this->flavor = flavor;
    }
    
IceCream::~IceCream(){
        std::cout <<"Icecream is melted :( no more "<< this->flavor << " left" << std::endl;
    }

