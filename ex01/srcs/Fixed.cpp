/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:46:26 by sam               #+#    #+#             */
/*   Updated: 2022/11/29 13:20:14 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int const _frac_part_bits = 8;

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
	this->_fixed_point_num = num_to_convert << _frac_part_bits;
}

Fixed::Fixed (const float float_to_convert)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point_num = roundf(float_to_convert * (1 << this->_frac_part_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
	return;
}

//==============================================================================
			// operators overload
//==============================================================================

Fixed& Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_point_num = rhs._fixed_point_num;
	return(*this);
}

std::ostream& operator<<(std::ostream& o, Fixed const& i)
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

//convertit  en fixe_point un float
float Fixed::toFloat( void ) const
{
	return (float) this->_fixed_point_num / (float) ( 1 << this->_frac_part_bits);
}

// convertit en fixe_point un int
int Fixed::toInt( void ) const
{
	return this->_fixed_point_num >> this->_frac_part_bits;
}
