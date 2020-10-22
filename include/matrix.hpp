#ifndef MATRIX_HPP 
#define MATRIX_HPP

#include<iostream>
#include<vector>

template<class T>
class Matrix {
public:
	Matrix(int height, int width)
		: m_height{ height }
		, m_width{ width }
		, m_data(height * width, 0)
	{
		if (height <= 0 || width <= 0) {
			std::cerr << "Invalid matrix dimensions";
		}
	}
	
	T& operator[](int index) {
		return &m_data[index * m_width];	
	}

	const T& operator[](int index) const {
		return &m_data[index * m_width];
	}
private:
	std::vector<T> m_data;
	int m_height;
	int m_width;
};

#endif
