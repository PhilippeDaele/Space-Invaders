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
#include "Bullets.hpp"

class Player : public Entity, public sf::Drawable{
private:
    sf::Texture playerTexture;
    sf::Sprite playerSprite;
public:
    Player();
    
    int getX();
    
    void draw(sf::RenderTarget &target, sf::RenderStates states) const;
    
    void update(float dt);
    
};


#endif /* Player_hpp */
