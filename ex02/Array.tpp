/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:58:49 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/13 18:42:15 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _data(NULL), _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n) :_data(NULL),  _size(n)
{
	if (n != 0)
		_data = new T[n]();
}

template <typename T>
Array<T>::Array(const Array<T> & toCopy) : _data(NULL), _size(0)
{
	_data = new T[toCopy.size()];
	_size = toCopy.size();
	for (unsigned int i = 0; i < toCopy.size(); i++)
		_data[i] = toCopy._data[i];
}

template <typename T>
Array<T>::~Array()
{
	delete[] _data;
}

template <typename T>
Array<T> & Array<T>::operator = (const Array<T> & toAssign)
{
	if (this == &toAssign)
		return *this;

	Array temp(toAssign);
	delete[] _data;
	_data = temp._data;
	temp._data = NULL;
	_size = temp._size;

	return *this;
}

template <typename T>
const T & Array<T>::operator [] (unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Error: index out of range");
	return _data[index];
}

template <typename T>
T & Array<T>::operator [] (unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Error: index out of range");
	return _data[index];
}

template <typename T>
std::size_t Array<T>::size() const
{
	return _size;
}

template <typename T>
std::ostream & operator << (std::ostream & ostream, const Array<T> & array)
{
	for (size_t i = 0; i < array.size(); ++i)
		ostream << array[i] << '\n';
	return ostream;
}
