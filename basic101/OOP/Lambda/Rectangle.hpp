//
//  Rectangle.hpp
//  basic101
//
//  Created by Saygin Guven on 2019-08-28.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include <iostream>
#include <functional>
#include <vector>
#include <math.h>

class Rectangle{
    
    private:
        double length;
        double width;
    public:
        Rectangle(): length{0}, width{0}{
            
        }
        Rectangle(double length, double width):length{length}, width{width}{
            
        }
    
        Rectangle(const Rectangle &obj);
    
        double getLength();
        void setLength(double length);
    
        double getWidth();
        void setWidth(double width);
    
        double area();
        double surface();
    
        static void ForEach(std::vector<Rectangle>& rectangles, std::function<void(Rectangle)> func);
    
        ~Rectangle();
    
        friend std::ostream &operator << (std::ostream & os, const Rectangle &obj){
            os  << "length : " << obj.length << std::endl
            << "width : " << obj.width << std::endl;
            return  os;
        }
    
        Rectangle& operator++();
        Rectangle operator++(int);
   
    
};

#endif /* Rectangle_hpp */
