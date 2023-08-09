/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:57:04 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/09 15:57:53 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	setType("WrongCat");
	std::cout << "WrongCat default constructor called" << std::endl;
}
WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat& otherWrongCat) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = otherWrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat& otherWrongCat) {
	std::cout << "WrongCat copy assignment operator is called" << std::endl;
	if (this == &otherWrongCat)
		return *this;
	setType(otherWrongCat.getType());
	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << "WrongCat makes MEW sound" << std::endl;
}
