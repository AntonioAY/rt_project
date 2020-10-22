#include "ray.hpp"

Ray::Ray(Coord origin, Vec direction)
: m_origin{ origin }
, m_direction{ direction }
{}

Coord& Ray::getOrigin() {
	return m_origin;
}

const Coord& Ray::getOrigin() const {
	return m_origin;
}

Vec& getDirection() {
	return m_direction;
}

const Vec& getDirection() const {
	return m_direction;
}
