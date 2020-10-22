#ifndef	OBJECTS_HPP 
#define	OBJECTS_HPP 

#include "materials.hpp"
#include "maths.hpp"
#include "ray.hpp"

class Object {
	Object(Coord position = Coord{});

	Coord& getPos();
	const Coord& getPos() const;

	virtual bool ray_intersection(const Ray& ray) =0;
private:
	Coord m_position;
};

class Light : public Object {
private:
	Colour colour;
	double brightness;
};

class Camera: public Object {
private:
	int screen_height;
	int screen_width;
	Vec focal_length;	
};

class Sphere : public Object {
	Sphere(Coord position = Coord{}, Material *material = nullptr, int radius = 1);
private:
	double m_radius;
	Material* m_material;
};

#endif
