/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:42:24 by ibertran          #+#    #+#             */
/*   Updated: 2024/09/29 14:28:19 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WATHEVER_HPP
# define WATHEVER_HPP

template <typename T>
void swap(T &a, T &b) {
	T	tmp;
	
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T &min(T &a, T &b) {
	return (a <= b ? a : b);
}

template <typename T>
const T &min(const T &a, const T &b) {
	return (a <= b ? a : b);
}

template <typename T>
T &max(T &a, T &b) {
	return (a >= b ? a : b);
}

template <typename T>
const T &max(const T &a, const T &b) {
	return (a >= b ? a : b);
}

#endif
