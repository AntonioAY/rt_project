#ifndef RAYTRACER_HPP 
#define	RAYTRACER_HPP 

#include "maths.hpp"
#include "multiarray.hpp"
#include "scene.hpp"

#include <iostream>

Frame_Buf& rt_render(Scene& scene, Frame_Buf& frame_buf);

#endif
