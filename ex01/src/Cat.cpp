/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:35:08 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/10 17:04:07 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), _brain(new Brain()) {
	setType("Cat");
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(Cat& otherCat) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = otherCat;
}

Cat& Cat::operator=(const Cat& otherCat) {
	std::cout << "Cat overload assignment operator is called" << std::endl;
	if (this == &otherCat)
		return *this;
	setType(otherCat.getType());
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Cat makes MEW sound" << std::endl;
}
