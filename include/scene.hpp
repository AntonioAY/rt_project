#ifndef SCENE_HPP 
#define	SCENE_HPP 

#include "materials.hpp"
#include "multiarray.hpp"
#include "objects.hpp"

#include <vector>

using Frame_Buf = Multiarray<Colour, g_DIM - 1>;

struct Scene {
	Camera *camera;
	std::vector<Object*> objectsList;
	std::vector<Light*> lightsList;
};

#endif
