#include <SFML/Graphics.hpp>

#include "Game.hpp"

int main(){

    sf::RenderWindow window(sf::VideoMode(1500, 1500), "Space Invaders (SW Edition)!");
    //background
    Game game;
    sf::Clock gameTime;
    sf::Texture BackgroundImage;


    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
            
            else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
                window.close();
            }
        }

        game.Update(gameTime.restart().asSeconds());

        window.clear();
        window.draw(game);
        window.display();

    
    }
    return 0;
}


