#include<iostream>
#include<string>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>


sf::Color colour = sf::Color::Green;
sf::Vector2f v2fMove(0.0f, 0.0f);

int main()
{

	sf::RenderWindow window(sf::VideoMode(1540, 900, 32), "Coursework 1"); //Draw an SFML window.
	sf::Texture ambulanceTexture;
	sf::Sprite ambulanceSprite;
	

	const float f_FPS = 60.0f; //The desired FPS. (The number of updates each second).
	bool b_redraw = true;      //Do I redraw everything on the screen?

	window.setFramerateLimit(f_FPS);
	sf::Clock clock;

	if (!ambulanceTexture.loadFromFile("../Vehicles/ambulance.png"))
	{
		std::cout << "No files." << std::endl;
	}
	else if (ambulanceTexture.loadFromFile("../Vehicles/ambulance.png")) {
		ambulanceTexture.loadFromFile("../Vehicles/ambulance.png");
	}

	//Origin of the sprite, position on the screen and initial rotation.
	ambulanceSprite.setOrigin(sf::Vector2f(250.f, 250.f));
	ambulanceSprite.setPosition(sf::Vector2f(500.f, 500.f));
	ambulanceSprite.setScale(sf::Vector2f(1.5f, 1.5f));

	//Set the texture of the sprite.
	ambulanceSprite.setTexture(ambulanceTexture);
	ambulanceSprite.setTexture(ambulanceTexture);

	while (window.isOpen())
	{
		//Wait until 1/60th of a second has passed, then update everything.
		if (clock.getElapsedTime().asSeconds() >= 1.0f / f_FPS)
		{
			b_redraw = true; //We're ready to redraw everything
			clock.restart();

		}
		//Check if the window is open or closed.
		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window.close();
			}

			//Move the sprite based on the key pressed.
			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::D)
				{
					ambulanceSprite.move(sf::Vector2f(2.f, 0.f));
				}
				if (event.key.code == sf::Keyboard::A)
				{
					ambulanceSprite.move(sf::Vector2f(-2.f, 0.f));
				}
				if (event.key.code == sf::Keyboard::W)
				{
					ambulanceSprite.move(sf::Vector2f(0, -2.f));
				}
				if (event.key.code == sf::Keyboard::S)
				{
					ambulanceSprite.move(sf::Vector2f(0, 2.f));
				}
			}
		}

		//Draw to the window
		if (b_redraw)
		{
			b_redraw = false;
			window.clear(sf::Color::White);

			//Draw the sprite
			window.draw(ambulanceSprite);
			window.display();
		}
	}
};
