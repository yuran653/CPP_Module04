/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:31:43 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/10 20:45:22 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	_type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal& otherAnimal) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = otherAnimal;
}

Animal& Animal::operator=(const Animal& otherAnimal) {
	std::cout << "Animal overload assignment operator called" << std::endl;
	if (this == &otherAnimal)
		return *this;
	_type = otherAnimal._type;
	return *this;
}

void	Animal::setType(std::string type) {
	_type = type;
}

std::string	Animal::getType(void) const {
	return _type;
}

void	Animal::makeSound(void) const {
	std::cout << "Animal doesn't make any sound" << std::endl;
}
