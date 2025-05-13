/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 23:54:33 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/13 18:06:56 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
#include "Array.hpp"
#include "utils.hpp"

int main(void)
{
	displaySection("ex03 : Array");

	try
	{
		displaySubtest("char");
		Array<char> charArray(4);
		charArray[0] = 'a';
		charArray[1] = 'b';
		charArray[2] = 'c';
		charArray[3] = 'd';
		std::cout << YELLOW "char array size: " RESET << charArray.size() << std::endl;
		std::cout << charArray;
		charArray[4] = 'e';
	}
	catch (const std::out_of_range & e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}

	try
	{
		displaySubtest("string");
		Array<std::string> stringArray(5);
		stringArray[0] = "a string";
		stringArray[1] = "an other string";
		stringArray[2] = "always a string";
		stringArray[3] = "more string";
		stringArray[4] = "more and more ...";
		std::cout << YELLOW "char array size: " RESET << stringArray.size() << std::endl;
		std::cout << stringArray;
		stringArray[5] = "out of range";
	}
	catch (const std::out_of_range & e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}

	try
	{
		displaySubtest("int");
		Array<int> intArray(6);
		intArray[0] = 10;
		intArray[1] = 11;
		intArray[2] = 12;
		intArray[3] = 13;
		intArray[4] = 14;
		intArray[5] = 15;
		std::cout << YELLOW "int array size: " RESET << intArray.size() << std::endl;
		std::cout << intArray;
		intArray[-5] = 15;
	}
	catch (const std::out_of_range & e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}

	try
	{
		displaySubtest("double");
		Array<double> doubleArray(7);
		doubleArray[0] = 10.1;
		doubleArray[1] = 10.2;
		doubleArray[2] = 10.3;
		doubleArray[3] = 10.4;
		doubleArray[4] = 10.5;
		doubleArray[5] = 10.6;
		doubleArray[6] = 10.7;
		std::cout << YELLOW "double array size: " RESET << doubleArray.size() << std::endl;
		std::cout << doubleArray;
		doubleArray[2147483648] = 15;
	}
	catch (const std::out_of_range & e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}

	return EXIT_SUCCESS;
}
