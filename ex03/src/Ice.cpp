/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:56:45 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/13 02:14:41 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	// std::cout << "Default Ice constructor calls" << std::endl;
}

Ice::Ice(Ice& other) : AMateria("ice") {
	// std::cout << "Copy Ice constructor calls" << std::endl;
	*this = other;
}

Ice::~Ice() {
	// std::cout << "Ice destructor calls" << std::endl;
}

Ice& Ice::operator=(const Ice& other) {
	// std::cout << "Ice overload assignment operator calls" << std::endl;
	if (this == &other)
		return *this;
	setType(other._type);
	return *this;
}

AMateria*	Ice::clone() const {
	AMateria* ice = new Ice();
	return ice;
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
