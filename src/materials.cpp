#include "materials.hpp"

#include <cassert>

Colour::Colour() : m_colour{} {
}

Colour::Colour(int R, int G, int B) : m_colour{ R, G, B } {
	assert(0 <= R && R <= 255);
	assert(0 <= G && G <= 255);
	assert(0 <= B && B <= 255);
}

int Colour::getColour(int index) const {
	assert(index == 0 || index == 1 || index ==2); 

	return m_colour[index];
}

void Colour::setColour(int index, int i) {
	assert(index == 0 || index == 1 || index ==2); 
	assert(0 <= i && i <= 255);	
		
	m_colour[index] = i;
}
