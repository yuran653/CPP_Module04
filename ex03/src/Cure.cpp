/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:56:50 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/13 00:59:10 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(Cure& other) : AMateria("cure") {
	*this = other;
}

Cure::~Cure() {
	std::cout << "Cure destructor calls" << std::endl;
}

Cure& Cure::operator=(const Cure& other) {
	if (this == &other)
		return *this;
	setType(other._type);
	return *this;
}

AMateria*	Cure::clone() const {
	AMateria* cure = new Cure();
	return cure;
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}
