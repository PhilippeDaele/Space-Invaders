//
//  Bullet.hpp
//  SFML Template
//
//  Created by Philippe Van Daele on 2018-02-21.
//  Copyright © 2018 Philippe Van Daele. All rights reserved.
//

#ifndef Bullets_hpp
#define Bullets_hpp

#include "Entity.hpp"
#include <stdio.h>

class Bullet : public Entity, public sf::Drawable{
private:
    sf::Texture bulletTexture;
    sf::Sprite bulletSprite;
    
public:
    Bullet();
    int getX();
    int getY();
    void update(float dt);
    void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};


#endif /* Bullets_hpp */

