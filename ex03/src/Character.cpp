/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:57:02 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/13 00:49:54 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("") {
	for (int i = 0; i < INVENTORY_SLOTS; i++)
		_inventory_slots[i] = NULL;
}

Character::Character(const std::string name) : _name(name) {
	for (int i = 0; i < INVENTORY_SLOTS; i++)
		_inventory_slots[i] = NULL;
}

Character::Character(Character& other) : _name(other._name) {
	// *this = other;
	for (int i = 0; i < INVENTORY_SLOTS; i++) {
		if (_inventory_slots[i])
			std::cout << "Copy: _inventory_slots[" << i << "]: ["
				<< &_inventory_slots[i] << "] value [" << _inventory_slots[i]->getType()
				<< "]" << std::endl;
		delete _inventory_slots[i];
		if (other._inventory_slots[i])
			_inventory_slots[i] = other._inventory_slots[i]->clone();
		else
			_inventory_slots[i] = nullptr;
	}
}

Character::~Character() {
	for (int i = 0; i < INVENTORY_SLOTS; i++) {
		if (_inventory_slots[i])
			std::cout << "Destructor: _inventory_slots[" << i << "]: ["
				<< &_inventory_slots[i] << "] value [" << _inventory_slots[i]->getType()
				<< "]" << std::endl;
		delete _inventory_slots[i];
		_inventory_slots[i] = NULL;
	}
}

Character& Character::operator=(const Character& other) {
	if (this == &other)
		return *this;
	setName(other._name);
	// for (int i = 0; i < INVENTORY_SLOTS; i++)
	// 	_inventory_slots[i] = other._inventory_slots[i];
	for (int i = 0; i < INVENTORY_SLOTS; i++) {
		if (_inventory_slots[i])
			std::cout << "Operator: _inventory_slots[" << i << "]: ["
				<< &_inventory_slots[i] << "] value [" << _inventory_slots[i]->getType()
				<< "]" << std::endl;
		delete _inventory_slots[i];
		if (other._inventory_slots[i])
			_inventory_slots[i] = other._inventory_slots[i]->clone();
		else
			_inventory_slots[i] = nullptr;
	}
	return *this;
}

void	Character::setName(const std::string& name) {
	const_cast<std::string&>(_name) = name;
}

const std::string&	Character::getName() const {
	return _name;
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < INVENTORY_SLOTS; i++)
		if (_inventory_slots[i] == NULL) {
			_inventory_slots[i] = m;
			break;
		}
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3) {
		delete _inventory_slots[idx]; // Manage later
		_inventory_slots[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <=3 && _inventory_slots[idx])
		_inventory_slots[idx]->use(target);
}
