//
//  Cat.cpp
//  basic101
//
//  Created by Saygin Guven on 2019-08-02.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#include "Cat.hpp"
#include <string>
#include <ctype.h>


int Cat::count = 0;

Cat::Cat() :
Cat("unknown","white",true,0,0){
    std::cout << " default constructor called " << std::endl;
}

//delegate this constructor to the overloaded constructor
Cat::Cat(std::string name, int health)
: Cat(name, "brown", true, 1, health){
    std::cout << " overloaded constructor called " << std::endl;
}

Cat::Cat(std::string name, std::string color, bool single,
         double weight, int health){
    std::cout << " overloaded constructor called " << std::endl;
    
    this->name = name;
    this->color = color;
    this->single = single;
    this->weight = weight;
    this->health = health;
    
    //increment whenever an object is created
    count += 1;
}

//copy constructor
Cat::Cat(const Cat &obj){
    std::cout << " copy constructor called " << std::endl;
    this->name = obj.name;
    this->color = obj.color;
    this->single = obj.single;
    this->weight = obj.weight;
    this->health = obj.health;
    
    count += 1;
    
}


//destructor
Cat::~Cat(){
    std::cout << " destructor called " << this->name << " is dead!" << std::endl;
    count -= 1;
}

//setters
void Cat::setName(std::string name){
    this->name = name;
}
void Cat::setColor(std::string color){
    this->color = color;
}
void Cat::setSingle(bool single){
    this->single = single;
}
void Cat::setWeight(double weight){
    this->weight = weight;
}
void Cat::setHealth(int health){
    this->health = health;
}

//getters
std::string Cat::getName(){
    return this->name;
}
std::string Cat::getColor(){
    return this->color;
}
bool Cat::getSingle(){
    return this->single;
}
double Cat::getWeight(){
    return this->weight;
}
int Cat::getHealth(){
    return this->health;
}


//this is the implementation

void Cat::introduceYourself(){
    
    std::cout << "the name of the cat is " << this->name << std::endl;
    std::cout << "the color of the cat is " << this->color << std::endl;
    std::cout << "the weight of the cat is " << this->weight  << " lb" << std::endl;
    std::cout << "the health of the cat is " << this->health << std::endl;
    
    // ternary operator
    // ( condition ) ? true : false
    this->single ? std::cout << "this cat is a single cat" <<std::endl : std::cout << "this cat is not single!" << std::endl;
}

void Cat::jump(){
    std::cout << "I jumped like a crazy cat" << std::endl;
}

void Cat::sleep(){
    std::cout << "zzz, I like sleeping all day long" << std::endl;
}

void Cat::eat(){
    std::cout << "hmmm, I like tuna" << std::endl;
}




