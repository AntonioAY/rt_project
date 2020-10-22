#ifndef PPM_HPP 
#define	PPM_HPP 

#include "scene.hpp"

// Only works if g_DIM = 3
bool framebufToPPM(const std::string& file_name, const Frame_Buf& frame_buf);
#endif
