//
//  Player.hpp
//  basic101
//
//  Created by Saygin Guven on 2019-08-26.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <climits>
#include <cmath>

class Player {
private:
    int health;
    int xp;
    double boost;
    mutable int counterPlus{0};
    
public:
    Player();
    Player(int health, int xp, double boost);
    Player(const Player &copyObj);
    
    int getHealth() const;
    void setHealth(int health);
    
    int getXp() const;
        void setXp(int xp);
    
    double getBoost() const;
    void setBoost(double boost);
    
    //int getCounterPlus() {return counterPlus;}// for debugging
    
    Player operator *(const Player &obj) const;
    Player operator +(const Player &obj) const ;
    
    bool operator ==(const Player &obj) const;
    bool operator!= (const Player &obj) const;
    
    friend std::ostream &operator << (std::ostream & os, const Player &obj);
    friend std::istream& operator >> (std::istream& is, Player& obj);
    
    ~Player();
    
};
#endif /* Player_hpp */
