//
//  Player.hpp
//  SFML Template
//
//  Created by Philippe Van Daele on 2018-02-20.
//  Copyright © 2018 Philippe Van Daele. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp
#include <stdio.h>
#include "Entity.hpp"
#include "Bullet.hpp"

class Player : public Entity, public sf::Drawable{
private:
    sf::Texture playerTexture;
    sf::Sprite playerSprite;
    bool alive;
    Bullet mbullet;
public:
    
    Player();
    int getX();
    void update(float dt);
    void draw(sf::RenderTarget &target, sf::RenderStates states) const;
    
};


#endif /* Player_hpp */
