/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 22:25:25 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/10 22:37:08 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <class T>
void swap(T & arg1, T & arg2)
{
	T temp = arg2;
	arg2 = arg1;
	arg1 = temp;
}

template <class T>
T min(T value1, T value2)
{
	return value2 > value1 ? value1 : value2;	
}

template <class T>
T max(T value1, T value2)
{
	return value2 > value1 ? value2 : value1;	
}

#endif