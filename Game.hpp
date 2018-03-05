//
//  Game.hpp
//  SFML Template
//
//  Created by Philippe Van Daele on 2018-02-19.
//  Copyright © 2018 Philippe Van Daele. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Entity.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "Bullet.hpp"


class Game : public sf::Drawable {
public:
    
    Game();
    void Update(float dt);
private:
    Player mPlayer;
    Enemy mEnemy;
    Bullet mBullet;
    sf::Texture mBackgroundTex;
    sf::Sprite mBackgroundSprite;
    
    void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};


#endif /* Game_hpp */
