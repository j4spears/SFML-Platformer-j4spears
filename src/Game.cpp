
#include "Game.h"
#include <iostream>

Game::Game(sf::RenderWindow& game_window)
  : window(game_window)
{
  srand(time(NULL));
}

Game::~Game()
{

}

bool Game::init()
{
  rock.initialiseSprite(*new sf::Texture, "../Data/Images/kenney_physicspack/PNG/Other/rock.png");

  player.Init();

  return true;
}

void Game::update(float dt)
{
  rock.update(dt);
  player.update(dt);
}

void Game::render()
{
  window.draw(*player.getSprite());
  window.draw(*rock.getSprite());
}

void Game::mouseClicked(sf::Event event)
{
  sf::Vector2i click = sf::Mouse::getPosition(window);


}

void Game::keyPressed(sf::Event event)
{
	
}


