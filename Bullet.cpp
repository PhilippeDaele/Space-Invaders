//
//  Bullet.cpp
//  SFML Template
//
//  Created by Philippe Van Daele on 2018-02-21.
//  Copyright © 2018 Philippe Van Daele. All rights reserved.
//

#include "Bullet.hpp"

Bullet::Bullet(){
    if(!bulletTexture.loadFromFile("/Users/philippevandaele/Desktop/SFML/SFML Template/SFML Template/res/img/blaster-bolt.png")){
        
        std::cout << "could not load Blaster" << std::endl;
    }
    
    bulletSprite.setTexture(bulletTexture);
    bulletSprite.scale(0.05f, 0.05f);
    bulletSprite.setPosition(750, 1500); // change the position value
}

void Bullet::update(float dt) {
    bulletSprite.move(0, -0.5);
}

void Bullet::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(bulletSprite, states);
}










