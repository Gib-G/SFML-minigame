#pragma once
#include "Element.h"
#include <SFML/Graphics.hpp>

/* Cette classe repr�sente les �l�ments textuels d'un �cran.
*/
class Rectangle : public Element {

public:

	explicit Rectangle(float x, float y, std::string name, float width ,float length, sf::Color color);

	void render(sf::RenderWindow& window) const override;

	float get_Width() {
		return width;
	}

	float get_Length() {
		return length;
	}

private:
	/* La couleur du cercle.
	*/
	sf::Color color;

	/* Le rayon du cercle.
	*/
	float width;
	
	/* Le nombre d'ar�tes. 0 pour un cercle normale (3 triangle ...)
	*/
	int length;

};