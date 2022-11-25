/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:14:42 by sam               #+#    #+#             */
/*   Updated: 2022/11/25 15:03:34 by sam              ###   ########.fr       */
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
		
		Fixed operator++(int);
		Fixed operator--(int);
		
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

		static Fixed min (Fixed& num1, Fixed& num2);
		static Fixed min (Fixed const& num1, Fixed const& num2);
		static Fixed max (Fixed& num1, Fixed& num2);
		static Fixed max (Fixed const& num1, Fixed const& num2);

	private:
			int 				_fixed_point_num;
			static int const	_frac_part_bits = 8;

};

std::ostream& operator << (std::ostream & o, Fixed const & i);

#endif