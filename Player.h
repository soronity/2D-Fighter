#pragma once
class Player
{
private:
	sf::Sprite sprite;
	sf::Texture textureSheet;

	//Animation

	//Movement

	//Core

	void initTexture();
	void initSprite();

public:
	Player();
	virtual ~Player();

	//Functions
	void update();
	void render(sf::RenderTarget& target);
};

