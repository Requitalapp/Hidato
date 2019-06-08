#pragma once

#include "SFML/Graphics.hpp"

namespace hidato
{
	class InputManager
	{
	public:
		InputManager() {};
		~InputManager() {};

		bool isSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window);
		sf::Vector2i getMousePosition(sf::RenderWindow &window);
		bool isRectangleClicked(sf::RectangleShape object, sf::Mouse::Button button, sf::RenderWindow &window);
	};
}
