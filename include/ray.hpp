#ifndef RAY_HPP
#define	 RAY_HPP

class Ray {
public:
	Ray(Coord origin, Vec direction);

	Coord& getOrigin();
	const Coord& getOrigin() const;

	Vec& getDirection();
	const Vec& getDirection() const;
private:
	Coord m_origin;
	Vec m_direction;
}
#endif
