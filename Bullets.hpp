//
//  Bullets.hpp
//  SFML Template
//
//  Created by Philippe Van Daele on 2018-02-21.
//  Copyright © 2018 Philippe Van Daele. All rights reserved.
//

#ifndef Bullets_hpp
#define Bullets_hpp

#include "Entity.hpp"
#include <stdio.h>

class Bullet : public Entity{
private:
    sf::RectangleShape bullet;
public:
    int moveSpeed = 10;
    int attackDamage = 5;
    
    Bullet();
    
};


#endif /* Bullets_hpp */
