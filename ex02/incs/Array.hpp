/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:27:50 by ibertran          #+#    #+#             */
/*   Updated: 2024/09/21 21:46:52 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdint.h>

template <class T>
class Array
{
	private:
		T			*_ptr;
		uint32_t	_size;

	public:
		Array(void);
		Array(const Array &);
		Array(uint32_t);
		~Array(void);

		Array	&operator=(const Array &);
		T	    &operator[](uint32_t index);
		const T &operator[](uint32_t index) const;

		uint32_t	size(void) const;

		void		display(void) const;
};

# include "Array.tpp"

#endif /* ******************************************************************* */
