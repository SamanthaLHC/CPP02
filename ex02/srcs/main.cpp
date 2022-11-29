/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:56:29 by sam               #+#    #+#             */
/*   Updated: 2022/11/29 14:44:15 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	{
		Fixed a;
		std::cout << "============================================================" << std::endl;
		std::cout << "Calculs " << std::endl;
		std::cout << "============================================================" << std::endl;

		std::cout << "* ____________________________" << std::endl;

		Fixed const b(Fixed(5.05f) * Fixed(2));
		std::cout << b << std::endl;

		std::cout << "+ ____________________________" << std::endl;

		Fixed const c(Fixed(5.05f) + Fixed(2));
		std::cout << c << std::endl;

		std::cout << "- ____________________________" << std::endl;

		Fixed const d(Fixed(5.05f) - Fixed(2));
		std::cout << d << std::endl;

		std::cout << "/ ____________________________" << std::endl;

		Fixed const e(Fixed(5.05f) / Fixed(2));
		std::cout << e << std::endl;
		Fixed const f(Fixed(5.05f) / Fixed(0));
		std::cout << f << std::endl;

		std::cout << "============================================================" << std::endl;
		std::cout << "Incrementations" << std::endl;
		std::cout << "============================================================" << std::endl;

		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << "============================================================" << std::endl;
		std::cout << "Decrementations " << std::endl;
		std::cout << "============================================================" << std::endl;

		std::cout << --a << std::endl;
		std::cout << a << std::endl;
		std::cout << a-- << std::endl;
		std::cout << a << std::endl;

		std::cout << "============================================================" << std::endl;
		std::cout << "Comparaisons " << std::endl;
		std::cout << "============================================================" << std::endl;

		std::cout << Fixed::max(a, b) << std::endl;
		std::cout << Fixed::min(a, b) << std::endl;
	}
	{
		std::cout << "============================================================" << std::endl;
		std::cout << "MAIN DU SUJET" << std::endl;
		std::cout << "============================================================" << std::endl;
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
		return 0;
	}
	return 0;
}