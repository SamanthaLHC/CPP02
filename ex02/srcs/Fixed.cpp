/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:46:26 by sam               #+#    #+#             */
/*   Updated: 2022/11/25 13:14:21 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
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
	this->_fixed_point_num = num_to_convert << this->_frac_part_bits;
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

// __opérateur d'assignation____________________________________________________

Fixed& Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_point_num = rhs._fixed_point_num;
	return(*this);
}

// __opérateur de flux de sortie standard_______________________________________

std::ostream& operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}
//__opérateurs de comparaisons__________________________________________________

bool Fixed::operator<(Fixed const& rhs)
{

}

bool Fixed::operator>(Fixed const& rhs)
{

}

bool Fixed::operator<=(Fixed const& rhs)
{

}

bool Fixed::operator>=(Fixed const& rhs)
{

}

bool Fixed::operator!=(Fixed const& rhs)
{

}

bool Fixed::operator==(Fixed const& rhs)
{

}

//__opérateurs arithmétiques____________________________________________________

Fixed Fixed::operator+(Fixed const& rhs)
{
	return Fixed (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const& rhs)
{
	return Fixed (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const& rhs)
{
	return Fixed (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const& rhs)
{
	return Fixed (this->toFloat() / rhs.toFloat());
}

//__opérateurs d´ incrémentation et de décrémentation___________________________

Fixed& Fixed::operator++()
{
	this->_fixed_point_num++;
	return *this;
}

Fixed& Fixed::operator--()
{
	this->_fixed_point_num++;
	return  *this;
}

//le retour est une copie de l 'instance (un tmp) avant de faire les modifs que 
// l'opérateur doit faire. cela permet de renvoyer une valeur et de l'augmenter

Fixed Fixed::operator++(int val)
{
	Fixed tmp(*this);
	++*this;
	return tmp;
}

Fixed Fixed::operator--(int val)
{
	Fixed tmp(*this);
	--*this;
	return tmp;
}

//==============================================================================
			// accessors and members functions
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
