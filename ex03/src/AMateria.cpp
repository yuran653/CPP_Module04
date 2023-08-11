/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:56:38 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/11 23:05:29 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// AMateria::AMateria() {
// }

AMateria::AMateria(const std::string& type) : _type(type) {
}

// AMateria::AMateria(AMateria& other) {
// 	*this = other;
// }

AMateria::~AMateria() {
}

// AMateria& AMateria::operator=(const AMateria& other) {
// 	if (this == &other)
// 		return *this;
// 	setType(other._type);
// 	return *this;
// }

// void	AMateria::setType(const std::string& type) {
//     const_cast<std::string&>(_type) = type;
// }

const std::string&	AMateria::getType() const {
	return _type;
}
