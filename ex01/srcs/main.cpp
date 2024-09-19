/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 21:59:17 by ibertran          #+#    #+#             */
/*   Updated: 2024/09/18 23:17:31 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"
#include "print.hpp"

void	incr(char &c) {
	c++;
}

void	mult(int &c) {
	c *= 5;
}

void 	print(const int &c) {
	std::cout << c << " ";
}

int main( void ) {
	std::cout << "Test00:\n";
	{
		char array[] = "012345678";

		::printarray<char>(array, 9);
		::iter<char>(array, 9, &incr);
		::printarray<char>(array, 9);
	}
	std::cout << "\nTest01:\n";
	{
		int array[] = {2, 5, 6, 8, 1};

		::printarray<int>(array, 5);
		::iter<int>(array, 5, &mult);
		::printarray<int>(array, 5);
	}
	std::cout << "\nTest02:\n";
	{
		const int array[] = {2, 5, 6, 8, 1};

		::printarray<const int>(array, 5);
		::iter<const int>(array, 5, &print);
		std::cout << std::endl;
	}
	return 0;
}
