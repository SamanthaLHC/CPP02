/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:14:42 by sam               #+#    #+#             */
/*   Updated: 2022/11/29 13:42:49 by sle-huec         ###   ########.fr       */
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
		Fixed (const int num_to_convert);
		Fixed (const float float_to_convert);
		Fixed& operator=(Fixed const& rhs);
		~Fixed(void);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;

		
	private:
			int 				_fixed_point_num;
			static int const	_frac_part_bits;

};

std::ostream& operator<<(std::ostream & o, Fixed const & i);

#endif