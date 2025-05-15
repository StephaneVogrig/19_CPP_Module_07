/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 22:42:24 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/11 20:21:52 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void print(const T & value)
{
	std::cout << value << std::endl;
}

template <typename T>
void iter(T * array, int length, void (* function)(T &))
{
	for (int i = 0; i < length; ++i)
	{
		function(array[i]);
	}
}

template <typename T>
void iter(T * array, int length, void (* function)(const T &))
{
	for (int i = 0; i < length; ++i)
	{
		function(array[i]);
	}
}

template <typename T>
void iter(T * array, int length, void (* function)(T))
{
	for (int i = 0; i < length; ++i)
	{
		function(array[i]);
	}
}

#endif
