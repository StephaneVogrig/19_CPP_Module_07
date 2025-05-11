/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 20:35:22 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/12 00:06:47 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

template <typename T>
class Array
{
	public:

		Array() : _data(NULL), _size(0)
		{}
		
		Array(unsigned int n) : _size(n)
		{
			if (n == 0)
				_data = NULL;
			else
				_data = new T[n];
		}
		
		Array(const Array & toCopy)
		{
			*this = toCopy;
		}

		~Array()
		{
			delete[] _data;
		}

		Array & operator = (const Array & toAssign)
		{
			if (this == toAssign)
				return this;

			delete[] _data;
			_size = toAssign.size();
			if (toAssign.size() == 0)
				_data = NULL;
			else
			{
				_data = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_data[i] = toAssign._data[i];
			}
			return *this;
		}
		
		T & operator [] (unsigned int index)
		{
			if (index >= _size)
				throw std::out_of_range("Error: index out of range");
			return _data[index];
		}

		std::size_t size() const
		{
			return _size;
		}

	private:

		T *		_data;
		size_t	_size;

};

#endif
