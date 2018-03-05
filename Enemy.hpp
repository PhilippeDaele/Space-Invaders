//
//  Enemy.hpp
//  SFML Template
//
//  Created by Philippe Van Daele on 2018-02-22.
//  Copyright © 2018 Philippe Van Daele. All rights reserved.
//

#ifndef Enemy_hpp
#define Enemy_hpp
#include <stdio.h>
#include "Entity.hpp"
#include "Bullet.hpp"

class Enemy : public Entity, public sf::Drawable{
private:
    sf::Texture enemyTexture;
    sf::Sprite enemySprite;
public:
    
    Enemy();
    int getX();
    int getY();
    bool collision();
    void update(float dt);
    void draw(sf::RenderTarget &target, sf::RenderStates states) const;
    
    //void setPos(sf::Vector2f newPos);
};

#endif /* Enemy_hpp */
