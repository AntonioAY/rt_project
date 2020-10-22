#ifndef MATHS_HPP
#define MATHS_HPP

#include "matrix.hpp"

#include <array>
#include <cstddef>
#include <vector>

constexpr int g_DIM = 3;

using MatrixI = Matrix<int>;
using MatrixF = Matrix<float>;
using MatrixD = Matrix<double>;

using Coord = std::array<int, g_DIM>;
using Vec = std::array<int, g_DIM>;

#endif
