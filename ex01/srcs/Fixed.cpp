/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:46:26 by sam               #+#    #+#             */
/*   Updated: 2022/11/24 16:37:04 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

//==============================================================================
	// constructors and destructor
//==============================================================================

Fixed::Fixed(void) : _fixed_point_num (0)
{
	std::cout << "Default constructor called." << std::endl;
	return;
}


Fixed::Fixed (Fixed const & cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed (const int num_to_convert)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed (const float float_to_convert)
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
	return;
}

//==============================================================================
			// surcharges opérateurs
//==============================================================================

Fixed& Fixed::operator = (Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_point_num = rhs.getRawBits();
	return(*this);
}

std::ostream& operator << (std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}

//==============================================================================
			// accesseurs et fonctions membres
// =============================================================================

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point_num;
}

void Fixed::setRawBits( int const raw )
{
	this->_fixed_point_num = raw;
}

//convertit  en fixe point un float
float Fixed::toFloat( void ) const
{
	
}

// convertit en fixe point un int
int Fixed::toInt( void ) const
{
	
}

