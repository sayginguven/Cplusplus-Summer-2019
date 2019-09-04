//
//  IceCream.hpp
//  basic101
//
//  Created by Saygin Guven on 2019-09-04.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#ifndef IceCream_hpp
#define IceCream_hpp

#include <stdio.h>
#include <iostream>

class IceCream{
private:
    std::string flavor;
public:
    IceCream();
    
    IceCream(std::string flavor);
    
    std::string getFlavor();
    void setFlavor(std::string flavor);
    
    ~IceCream();
};


#endif /* IceCream_hpp */
