#include "stdafx.h"
#include "Game.h"

void Game::initWindow()
{
	this->window.create(sf::VideoMode(800,600), "SFML works!", sf::Style::Close | sf::Style::Titlebar);
}

void Game::initPlayer()
{
	this->player = new Player();
	this->initPlayer();
}

Game::Game()
{
	this->initWindow();
}

Game:: ~Game()
{
	delete this->player;
}

void Game::update()
{
	// Polling window event
	while (this->window.pollEvent(this->ev)) {
		switch (this->ev.type) {
		case sf::Event::Closed:
			this->window.close();
			break;
		case sf::Event::KeyPressed:
			if (this->ev.key.code == sf::Keyboard::Escape)
				this->window.close();
			break;
		}
	}

	this->updatePlayer();
}

void Game::render()
{
	this->window.clear();



	// Draw game objects
	this->window.display();
}

const sf::RenderWindow& Game::getWindow() const
{
	return this->window;
}

void Game::updatePlayer()
{
	this->player->update();
}
