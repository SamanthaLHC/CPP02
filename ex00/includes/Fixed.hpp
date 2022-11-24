/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:14:42 by sam               #+#    #+#             */
/*   Updated: 2022/11/24 15:32:18 by sam              ###   ########.fr       */
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
		Fixed& operator = (Fixed const& rhs);
		// ici le destruct n'est pas sous forme canonique
		~Fixed(void);

		//retourne la valeur du nombre à virgule fixe sans la convertir.
		int getRawBits( void ) const;
		//initialise la valeur du nombre à virgule fixe avec celle passée en paramètre.
		void setRawBits( int const raw );

	private:
			int 				_fixed_point_num;
			static int const	_frac_part_bits = 8;

};

// ci dessous, une surcharge d opérateur fréquemment utilisée:
// sert à sérialiser une classe vers une str (nani ??)
// std::ostream& operator << (std::ostream & o, Fixed const & i);

#endif