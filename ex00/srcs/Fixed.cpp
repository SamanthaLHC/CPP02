/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:46:26 by sam               #+#    #+#             */
/*   Updated: 2022/11/29 14:51:21 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int const __attribute__ ((unused))	Fixed::_frac_part_bits = 8;

Fixed::Fixed(void) : _fixed_point_num (0)
{
	std::cout << "Default constructor called." << std::endl;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
	return;
}

Fixed::Fixed (Fixed const & cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed& Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_point_num = rhs.getRawBits();
	return(*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point_num;
}

void Fixed::setRawBits( int const raw )
{
	this->_fixed_point_num = raw;
}

