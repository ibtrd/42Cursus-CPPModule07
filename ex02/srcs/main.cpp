/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 21:59:17 by ibertran          #+#    #+#             */
/*   Updated: 2024/09/21 21:14:37 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Array.hpp"

int main( void ) {
	{
		Array<int>	arr(5);

		arr.display();
		arr[2] = 4;
		arr.display();

		std::cout << "arr[0]=" << arr[0] << "\n";
		std::cout << "arr[2]=" << arr[2] << "\n";
		std::cout << "arr.size()=" << arr.size() << "\n";
	}
	std::cout << "\n---------------\n\n";
	{
		Array<std::string>		arr(4);

		arr[0] = "This";
		arr[1] = "is";
		arr[2] = "a";
		arr[3] = "test!";
		arr.display(); //This is a test!

		Array<std::string>		empty;

		empty.display(); // *empty string*
		empty = arr;
		empty[2] = "another";
		arr.display(); //This is a test!
		empty.display(); //This is another test!

		const Array<std::string> copy(arr);

		copy.display(); //This is a test!
		arr[1] = "was";
		copy.display();//This is a test!
		arr.display(); //This was a test!
	}
	return 0;
}
