#include "ppm_io.hpp"
#include "rt_project.hpp"

#include <array>
#include <iostream>

int main() {
	std::cout << "Hello World\n";
	
	int screen_x_dim = 1200;
	int screen_y_dim = 800;
	Frame_Buf frame_buf{ {screen_x_dim, screen_y_dim} };

	for(int i{ 0 }; i < screen_x_dim / 2; ++i) {
		for(int j{ 0 }; j < screen_y_dim / 2; ++j) {
			frame_buf({ i, j }).setColour(0, 100);
			frame_buf({ i + 30, j }).setColour(1, 100);
			frame_buf({ i + 80, j }).setColour(2, 100);
		}
	}

	framebufToPPM("test_image.ppm", frame_buf);
	return 0;
}
