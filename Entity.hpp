//
//  Entity.hpp
//  SFML Template
//
//  Created by Philippe Van Daele on 2018-02-20.
//  Copyright © 2018 Philippe Van Daele. All rights reserved.
//

#ifndef Entity_hpp
#define Entity_hpp

#include <stdio.h>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <string>

class Entity{
private:
    sf::Sprite sprite;
    sf::Texture textures;
public:
    //virtual bool collision() = 0;
    //move() function : void
    //shoot() function, void?
    
    virtual void update(float dt) = 0;
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const = 0;
    
    
};
#endif /* Entity_hpp */

