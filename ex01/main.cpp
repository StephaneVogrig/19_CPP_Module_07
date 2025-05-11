/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 22:51:06 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/11 20:12:20 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "iter.hpp"
#include "utils.hpp"

void square(int i)
{
	std::cout << i * i << std::endl;
}

void strLength(const std::string & str)
{
	std::cout << str.length() << std::endl;
}

void isDigit(char & c)
{
	std::cout << (c >= '0' && c <= '9') << std::endl;
}

int main(void)
{
	displaySection("ex01 : iter");
	
	displaySection("test arrayInt");
	int arrayInt[] = {1, 2, 3};
	int length = sizeof(arrayInt) / sizeof(arrayInt[0]);
	displaySubtest("print");
	iter(arrayInt, length, print);
	displaySubtest("square");
	iter(arrayInt, length, square);
	
	displaySection("test arrayString");
	std::string arrayString[] = {"a string", "an other string", "always a string", "more string"};
	length = sizeof(arrayString) / sizeof(arrayString[0]);
	displaySubtest("print");
	iter(arrayString, length, print);
	displaySubtest("length");
	iter(arrayString, length, strLength);

	displaySection("test arrayChar");
	char arrayChar[] = {'h', 'e', 'l', 'l', 'o', ' ', '4', '2'};
	length = sizeof(arrayChar) / sizeof(arrayChar[0]);
	displaySubtest("print");
	iter(arrayChar, length, print);
	displaySubtest("isDigit");
	iter(arrayChar, length, isDigit);
	
	return EXIT_SUCCESS;	
}
