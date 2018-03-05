//
//  Game.cpp
//  SFML Template
//
//  Created by Philippe Van Daele on 2018-02-19.
//  Copyright © 2018 Philippe Van Daele. All rights reserved.
//

#include "Game.hpp"

Game::Game()
{
    if (!mBackgroundTex.loadFromFile("/Users/philippevandaele/Desktop/SFML/SFML Template/SFML Template/res/img/Background.jpg")){
        std::cout << "could not load background" << std::endl;
        
        system("pause");
    }
    mBackgroundSprite.setTexture(mBackgroundTex);
}

void Game::Update(float dt) {
    mPlayer.update(dt);
    mEnemy.update(dt);
    mBullet.update(dt);
}

void Game::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(mBackgroundSprite,states);
    target.draw(mPlayer, states);
    target.draw(mEnemy, states);
    target.draw(mBullet, states);
    
    
}



