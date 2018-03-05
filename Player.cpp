//
//  Player.cpp
//  SFML Template
//
//  Created by Philippe Van Daele on 2018-02-20.
//  Copyright © 2018 Philippe Van Daele. All rights reserved.
//

#include "Player.hpp"
#include "Bullet.hpp"


Player::Player(){
    if(!playerTexture.loadFromFile("/Users/philippevandaele/Desktop/SFML/SFML Template/SFML Template/res/img/X-Wing.jpg")){
        
        std::cout << "could not load X-Wing" << std::endl;
    }
    
    playerSprite.setTexture(playerTexture);
    playerSprite.setTextureRect(sf::IntRect(0,0, 150, 200));
    playerSprite.scale(0.7f, 0.7f);
    playerSprite.setPosition(700, 1350);
}


void Player::update(float dt) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        playerSprite.move(-1,0);
        if(playerSprite.getPosition().x < 0){
            playerSprite.move(1, 0);
        }
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        playerSprite.move(1,0);
        if(playerSprite.getPosition().x > 1400){ // change the value 1400 to window function??
            playerSprite.move(-1,0);
        }
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)){
        
    }
    
}

void Player::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(playerSprite, states);
}


int Player::getX() {
    std::cout << std::to_string(playerSprite.getPosition().x) << std::endl;
    return playerSprite.getPosition().x;
}








