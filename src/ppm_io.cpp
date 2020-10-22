#include "maths.hpp"
#include "ppm_io.hpp"

#include <fstream>

using Vec1 = std::array<int, g_DIM - 1>;

bool framebufToPPM(const std::string& file_name, const Frame_Buf& frame_buf) {
	if (g_DIM != 3)
		return false;

	std::ofstream output_file{ file_name, std::ios::trunc | std::ios::binary };

	if(!output_file)
		return false;

	Vec1 frame_buf_dimensions{ frame_buf.getDimensions() };
	output_file << "P3\n";
	output_file << frame_buf.getDimensions().at(0) << " ";
	output_file << frame_buf.getDimensions().at(1) << "\n";
	output_file << "255\n";

	for(int i{ 0 }; i < frame_buf_dimensions[1]; ++i) {
		for (int j{ 0 }; j < frame_buf_dimensions[0]; ++j) {
			for(int k{ 0 }; k < 3; ++k) {
				output_file << " " << frame_buf({ j, i }).getColour(k);
				output_file << " \n";
			}
		}
	}

	return true;
}
