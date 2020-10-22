#include "maths.hpp"
#include "objects.hpp"

Object::Object(Coord position) : m_position{ position } {
}

virtual bool Object::ray_intersection(const Ray& ray) {
	return false;
}

Coord& Object::getPos() {
	return m_position;
}

const Coord& Object::getPos() const {
	return m_position
}

Sphere::Sphere(Coord position, Material *material, int radius)
: Object{ position }
, m_material{ material }
, m_radius{ radius }
{
}
