/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:56:45 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/13 19:15:52 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(Ice& other) : AMateria("ice") {
	*this = other;
}

Ice::~Ice() {
}

Ice& Ice::operator=(const Ice& other) {
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
