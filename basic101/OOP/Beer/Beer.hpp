//
//  Beer.hpp
//  basic101
//
//  Created by Saygin Guven on 2019-09-04.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#ifndef Beer_hpp
#define Beer_hpp

#include <stdio.h>
#include <iostream>

template<class T>
class Beer{

private:
    T source;
public:
    Beer(){
        std::cout << "beer is ready to serve" << std::endl;
    }
    
    Beer(T source){
        this->source = source;
    }
    
    T getSource(){
        return source;
    }
    
    ~Beer(){
        std::cout << "beer is empty " << std::endl;
    }
    
   
    
};

#endif /* Beer_hpp */

