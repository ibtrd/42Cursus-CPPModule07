/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:42:24 by ibertran          #+#    #+#             */
/*   Updated: 2024/09/18 23:51:22 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_HPP
# define PRINT_HPP

#include <cstddef>
#include <iostream>

template <typename T>
void	printarray(T *array, size_t len)
{
	for (size_t i = 0; i < len; i++) {
		std::cout << (array[i]) << (i != len - 1 ? " " : "\n");
	}
    std::cout << std::flush;
}

#endif
