//
//  Animals.cpp
//  basic101
//
//  Created by Saygin Guven on 2019-08-21.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#include <stdio.h>
#include <iostream>
//base
class Animal{
public:
    virtual void sound(){
        std::cout << " I can not make sound since I dont know what kind of animal I am" << std::endl;
    }
    virtual ~Animal(){};
};
//inherited class, derived class
class Mouse : public Animal{
public:
    virtual void sound() override
    {
        std::cout << "squeak" << std::endl;
    }
    virtual ~Mouse(){};
};
//inherited class, derived class
class Bird : public Animal{
public:
    virtual void sound() override{
        std::cout << "tweet" << std::endl;
    }
    virtual ~Bird(){};
};
//inherited class , derived class
class Dog : public Animal{
public:
    virtual void sound() override{
        std::cout << "whooof" << std::endl;
    }
    virtual ~Dog(){};
};
