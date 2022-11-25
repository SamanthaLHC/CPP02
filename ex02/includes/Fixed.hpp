/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:14:42 by sam               #+#    #+#             */
/*   Updated: 2022/11/25 12:14:58 by sam              ###   ########.fr       */
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
		// ici le destruct n'est pas sous forme canonique
		~Fixed(void);

		Fixed& operator=(Fixed const& rhs);
		
		//prefix ope_===========================================================
		//======================================================================

		Fixed& operator++();
		Fixed& operator--();

		//postfix opé_==========================================================
		//======================================================================
		
		Fixed operator++(int val);
		Fixed operator--(int val);
		
		//arithmetic_===========================================================
		//======================================================================

		Fixed operator+(Fixed const& rhs);
		Fixed operator-(Fixed const& rhs);
		Fixed operator*(Fixed const& rhs);
		Fixed operator/(Fixed const& rhs);

		//comparators_==========================================================
		//======================================================================
		
		bool operator<(Fixed const& rhs);
		bool operator>(Fixed const& rhs);
		bool operator<=(Fixed const& rhs);
		bool operator>=(Fixed const& rhs);
		bool operator!=(Fixed const& rhs);
		bool operator==(Fixed const& rhs);

		// members func_========================================================
		//======================================================================

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;

	private:
			int 				_fixed_point_num;
			static int const	_frac_part_bits = 8;

};

std::ostream& operator << (std::ostream & o, Fixed const & i);

#endif