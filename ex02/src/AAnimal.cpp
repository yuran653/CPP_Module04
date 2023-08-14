/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:31:43 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/15 01:34:53 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	_type = "AAnimal";
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal& otherAAnimal) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = otherAAnimal;
}

AAnimal& AAnimal::operator=(const AAnimal& otherAAnimal) {
	std::cout << "AAnimal overload assignment operator called" << std::endl;
	if (this == &otherAAnimal)
		return *this;
	_type = otherAAnimal._type;
	return *this;
}

void	AAnimal::setType(std::string type) {
	_type = type;
}

std::string	AAnimal::getType(void) const {
	return _type;
}
