#ifndef MULTIARRAY_HPP 
#define	MULTIARRAY_HPP

#include <array>
#include <cassert>
#include <cstddef>
#include <initializer_list>

#include <iostream>
template<class T, int N>
class Multiarray {
public:
	Multiarray(std::array<int, N> array_index_dims);

	~Multiarray(); 

	T& operator()(const std::array<int, N>& index); 
	const T& operator()(const std::array<int, N>& index) const;	

	const std::array<int, N>& getDimensions() const;
private:
	const int m_array_dim;
	const std::array<int, N> m_array_index_dims;
	T* m_multiarray;
};

template<class T, int N>
Multiarray<T, N>::Multiarray(std::array<int, N> array_index_dims)
: m_array_dim{ array_index_dims.size() }
, m_array_index_dims{ array_index_dims }
{
	int dimensions{ 1 };
	for(int i : array_index_dims) {
		assert(i > 0);

		dimensions *= i;
	}
	m_multiarray =  new T[dimensions]{};
}

template<class T, int N>
Multiarray<T, N>::~Multiarray() {
	delete[] m_multiarray;
}

template<class T, int N>
T& Multiarray<T, N>::operator()(const std::array<int, N>& index) {
	assert(index.size() == m_array_dim);

	int real_index{ 0 };
	for(int i{ m_array_dim - 1}; i >= 1; --i) {
		assert(index[i] < m_array_index_dims[i]);
		real_index += index[i];
		real_index *= m_array_index_dims[i-1];
	}
	assert(index[0] < m_array_index_dims[0]);
	real_index += index[0];	
//	std::cout << real_index << std::endl;
	return (m_multiarray[real_index]);
}

template<class T, int N>
const T& Multiarray<T, N>::operator()(const std::array<int, N>& index) const {
	assert(index.size() == m_array_dim);

	int real_index{ 0 };
	for(int i{ m_array_dim - 1 }; i >= 1; --i) {
		assert(index[i] < m_array_index_dims[i]);
		real_index += index[i];
		real_index *= m_array_index_dims[i-1];
	}
	assert(index[0] < m_array_index_dims[0]);
	real_index += index[0];	

	return (m_multiarray[real_index]);
}

template<class T, int N>
const std::array<int, N>& Multiarray<T, N>::getDimensions() const {
	return m_array_index_dims;
}

#endif
