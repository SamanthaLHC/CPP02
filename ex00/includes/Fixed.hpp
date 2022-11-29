/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:14:42 by sam               #+#    #+#             */
/*   Updated: 2022/11/29 13:05:14 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed (Fixed const & cpy);
		Fixed& operator=(Fixed const& rhs);
		~Fixed(void);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
			int 				_fixed_point_num;
			static int const	_frac_part_bits;

};

// ci dessous, une surcharge d opérateur fréquemment utilisée:
// sert à sérialiser une classe vers une str (nani ??)
// std::ostream& operator << (std::ostream & o, Fixed const & i);

#endif