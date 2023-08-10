/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:54:40 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/10 16:38:15 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	_type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& otherWrongAnimal) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = otherWrongAnimal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& otherWrongAnimal) {
	std::cout << "WrongAnimal overload assignment operator called" << std::endl;
	if (this == &otherWrongAnimal)
		return *this;
	_type = otherWrongAnimal._type;
	return *this;
}

void	WrongAnimal::setType(std::string type) {
	_type = type;
}

std::string	WrongAnimal::getType(void) const {
	return _type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal doesn't make any sound" << std::endl;
}
