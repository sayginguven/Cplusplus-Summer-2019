//
//  Rectangle.cpp
//  basic101
//
//  Created by Saygin Guven on 2019-08-28.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#include "Rectangle.hpp"


Rectangle::Rectangle(const Rectangle &obj){
    this->length = obj.length;
    this->width = obj.width;
}

double Rectangle::getLength(){
    return this->length;
}
void Rectangle::setLength(double length){
    this->length = length;
}

double Rectangle::getWidth(){
    return this->width;
}
void Rectangle::setWidth(double width){
    this->width = width;
}

double Rectangle::area(){
    return this->length*this->width;
}

double Rectangle::surface(){
    return 2*(this->length+this->width);
}

void Rectangle::ForEach(std::vector<Rectangle>& rectangles, std::function<void(Rectangle)> func){
    
    for (auto item : rectangles) {
        func(item);
    }
}

Rectangle::~Rectangle(){}


//pre increment ++rectobj
Rectangle& Rectangle::operator++(){
    this->length ++;
    this->width ++;
    return *this;
}

//post increment rectobj++
Rectangle Rectangle::operator++(int){
    Rectangle tmp = (*this);
    ++*this;
    return tmp;
}

