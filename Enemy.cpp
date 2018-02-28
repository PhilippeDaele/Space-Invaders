//
//  Enemy.cpp
//  SFML Template
//
//  Created by Philippe Van Daele on 2018-02-22.
//  Copyright © 2018 Philippe Van Daele. All rights reserved.
//

#include "Enemy.hpp"
#include "Bullets.hpp"

Enemy::Enemy(){
    if(!enemyTexture.loadFromFile("/Users/philippevandaele/Desktop/SFML/SFML Template/SFML Template/res/img/Tie-Fighter.png")){
        std::cout << "Could not load Tie-Fighter" << std::endl;
        system("pause");
    }
    
    enemySprite.setTexture(enemyTexture);
    enemySprite.scale(1.5f, 1.5f);
    enemySprite.setPosition(100, 100);
    
}

int Enemy::getX() {
    return enemySprite.getPosition().x;
}

int Enemy::getY(){
    return enemySprite.getPosition().y;
}

void Enemy::update(float dt){
    enemySprite.move(0.09,0);
}

void Enemy::draw(sf::RenderTarget &target, sf::RenderStates states) const{
    target.draw(enemySprite, states);
}









//void Enemy::setPos(sf::Vector2f newPos) {
//    enemySprite.setPosition(newPos);
//}



