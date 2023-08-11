/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:57:02 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/12 01:10:25 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string name) : ICharacter(name) {
}

Character::~Character() {
}

const std::string&	Character::getName() const {
	return _name;
}

void				Character::equip(AMateria* m) {

}

void				Character::unequip(int idx) {

}

void				Character::use(int idx, ICharacter& target) {

}
