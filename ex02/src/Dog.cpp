/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:35:02 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/10 20:33:53 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain()) {
	setType("Dog");
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog& otherDog) : Animal(otherDog), _brain(new Brain()) {
    std::cout << "Dog copy constructor called" << std::endl;
	*this = otherDog;
}

Dog& Dog::operator=(const Dog& otherDog) {
	std::cout << "Dog overload assignment operator is called" << std::endl;
	if (this == &otherDog)
		return *this;
	setType(otherDog.getType());
	for (int i = 0; i < SIZE; i++)
		copyIdea(i, const_cast<Dog&>(otherDog).getIdea(i));
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Dog makes BARK sound" << std::endl;
}

void	Dog::changeType(std::string type) {
	setType(type);
}
