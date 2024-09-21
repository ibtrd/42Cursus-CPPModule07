/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:27:19 by ibertran          #+#    #+#             */
/*   Updated: 2024/09/21 21:47:06 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <iostream>
# include "Array.hpp"

/* CONSTRUCTORS ************************************************************* */

template <class T>
Array<T>::Array(void) { 
	this->_size = 0;
	this->_ptr = NULL;
}

template <class T>
Array<T>::Array(const Array &other) {
	this->_size = other.size();
	if (!other.size()) {
		delete [] this->_ptr;
		this->_ptr = NULL;
	} else {
		this->_ptr = new T[this->size()];
		*this = other;
	}
}

template <class T>
Array<T>::Array(uint32_t size) {
	this->_size = size;
	this->_ptr = new T[this->size()];
	for (uint32_t i = 0; i < this->size(); i++) {
		(*this)[i] = T();
	}
}

template <class T>
Array<T>::~Array(void) {
	delete [] this->_ptr;
}

/* OPERATOR OVERLOADING ***************************************************** */

template <class T>
Array<T>    &Array<T>::operator=(const Array<T> &other) {
	if (this == &other) {
		return (*this);
	}
	if (this->size() != other.size()) {
		delete [] this->_ptr;
		this->_size = other.size();
		this->_ptr = new T[this->size()];
	}
	for (uint32_t i = 0; i < other.size(); i++) {
		(*this)[i] = other[i];
	}
	return (*this);
}

template <class T>
T   &Array<T>::operator[](uint32_t index) {
	if (index > this->_size) {
		throw std::out_of_range("index access out of array bounds");
	}
	return (this->_ptr[index]);
}

template <class T>
const T   &Array<T>::operator[](uint32_t index) const {
	if (index > this->_size) {
		throw std::out_of_range("index access out of array bounds");
	}
	return (this->_ptr[index]);
}

/* ************************************************************************** */

template <class T>
uint32_t	Array<T>::size(void) const {
	return (this->_size);
}

template <class T>
void		Array<T>::display(void) const {
	for	(uint32_t i = 0; i < this->size(); i++) {
		if (i) {
			std::cout << " ";
		}
		std::cout << (*this)[i];
	}
	std::cout << "\n";
}

#endif
