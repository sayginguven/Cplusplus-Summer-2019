//
//  Player.cpp
//  basic101
//
//  Created by Saygin Guven on 2019-08-26.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#include "Player.hpp"


Player::Player() : health{0}, xp{0}, boost{0}{}
Player::Player(int health, int xp, double boost) : health{health}, xp{xp}, boost{boost} {
}
Player::Player(const Player &copyObj){
    this->health = copyObj.health;
    this->xp = copyObj.xp;
    this->boost = copyObj.boost;
}

int Player::getHealth() const{ return health; }
void Player::Player::setHealth(int health){ this->health = health; }

int Player::getXp() const{ return xp; }
void Player::setXp(int xp){ this->xp = xp; }

double Player::getBoost() const{ return  boost;}
void Player::setBoost(double boost){ this->boost = boost;}

//int getCounterPlus() {return counterPlus;}// for debugging

Player Player::operator *(const Player &obj) const{
    return Player(this->health,this->xp, (obj.boost*this->boost));
}

Player Player::operator +(const Player &obj) const {
    counterPlus+=1; //muted
    return Player(this->health+obj.health, this->xp+obj.xp , obj.boost);
}

bool Player::operator ==(const Player &obj) const{
    //0.800000004 - 0.8 = 0.000000004
    return (this->health == obj.health && this->xp == obj.xp && (std::abs(this->boost - obj.boost)< 0.001) );
}

bool Player::operator!= (const Player &obj) const{
    return !(*this == obj);
}

std::ostream &operator << (std::ostream & os, const Player &obj){
    os  << "object health : " << obj.health << std::endl
    << "object xp : " <<obj.xp << std::endl
    << "obj boost : " << obj.boost;
    return  os;
}

std::istream& operator >> (std::istream& is, Player& obj)
{
    is >> obj.health >> obj.xp>> obj.boost;
    return is;
}


Player::~Player(){}
