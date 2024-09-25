/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 21:59:17 by ibertran          #+#    #+#             */
/*   Updated: 2024/09/25 17:12:05 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

void	incr(char &c) {
	c++;
}

void	mult(int &c) {
	c *= 5;
}

template <typename T>
void 	print(const T &c) {
	std::cout << c << " ";
}

int main( void ) {
	std::cout << "Test00:\n";
	{
		char array[] = "012345678";

		iter(array, 9, &print);
		std::cout << "\n";
		iter(array, 9, &incr);
		iter(array, 9, &print);
		std::cout << "\n";
	}
	std::cout << "\nTest01:\n";
	{
		int array[] = {2, 5, 6, 8, 1};

		iter(array, 5, &print);
		std::cout << "\n";
		iter(array, 5, &mult);
		iter(array, 5, &print);
		std::cout << "\n";
	}
	std::cout << "\nTest02:\n";
	{
		const int array[] = {2, 5, 6, 8, 1};
		
		iter(array, 5, &print);
		std::cout << std::endl;
	}
	return 0;
}
