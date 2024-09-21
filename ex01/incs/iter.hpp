/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:42:24 by ibertran          #+#    #+#             */
/*   Updated: 2024/09/21 21:28:02 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

template <typename T>
void	iter(T *array, size_t len, void (*func)(T &))
{
	for (size_t i = 0; i < len; i++) {
		func(array[i]);
	}
}

template <typename T>
void	iter(const T *array, size_t len, void (*func)(const T &))
{
	for (size_t i = 0; i < len; i++) {
		func(array[i]);
	}
}

#endif
