/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:35:08 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/09 12:16:32 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	setType("Cat");
	std::cout << "Cat default constructor called" << std::endl;
}
Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(Cat& otherCat) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = otherCat;
}

Cat& Cat::operator=(const Cat& otherCat) {
	std::cout << "Cat copy assignment operator is called" << std::endl;
	if (this == &otherCat)
		return *this;
	setType(otherCat.getType());
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Cat make MEW sound" << std::endl;
}
