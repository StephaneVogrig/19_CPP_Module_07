/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 20:35:22 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/13 18:03:19 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>
# include <iostream>

template <typename T>
class Array
{
	public:

		Array();		
		Array(unsigned int n);
		Array(const Array<T> & toCopy);
		~Array();

		Array<T> &	operator = (const Array<T> & toAssign);
		const T & 		operator [] (unsigned int index) const;
		T & 		operator [] (unsigned int index);
		std::size_t size() const;

	private:

		T *		_data;
		size_t	_size;

};

template <typename T>
std::ostream & operator << (std::ostream & ostream, const Array<T> & array);

# include "Array.tpp"

#endif
