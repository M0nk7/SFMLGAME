#pragma once
#include<SFML/Graphics.hpp>
#include"Collider.h"
class Platform
{
public:
	Platform(sf::Texture* texture, sf::Vector2f size, sf::Vector2f position);
	~Platform();

	void SetPosition(sf::Vector2f(position)) { body.setPosition(position); }
	void Draw(sf::RenderWindow& window);
	sf::Vector2f GetPosition() { return body.getPosition(); }
	Collider GetCollider(){ return Collider(body); }
	sf::RectangleShape body;

private:
	
};

