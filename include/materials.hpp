#ifndef MATERIALS_HPP 
#define	MATERIALS_HPP

#include <array>

class Colour {
public:
	Colour();
	Colour(int R, int G, int B);

	int getColour(int index) const;
	void setColour(int index, int i);
private:
	std::array<int, 3> m_colour;
};

class Material {

};

class Diffuse : public Material {
private:
	Colour m_colour;
};
#endif
