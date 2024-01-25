#include "stdafx.h"
#include "Game.h"

void Game::initWindow()
{
	this->window.create(sf::VideoMode(800,600), "SFML works!", sf::Style::Close | sf::Style::Titlebar);
}

Game::Game()
{
	this->initWindow();
}

Game:: ~Game()
{
	this->window.close();
}

void Game::update()
{
	std::cout << "Lol" << "\n";
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