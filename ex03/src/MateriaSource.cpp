/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:57:14 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/12 21:10:41 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < SOURCE_SLOTS; i++)
		_source_slots[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource& other) {
	// *this = other;
	for (int i = 0; i < SOURCE_SLOTS; i++) {
		if (other._source_slots[i])
			_source_slots[i] = other._source_slots[i]->clone();
		else
			_source_slots[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < SOURCE_SLOTS; i++) {
		delete _source_slots[i];
		_source_slots[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this == &other)
		return *this;
	// for (int i = 0; i < SOURCE_SLOTS; i++)
	// 	_source_slots[i] = other._source_slots[i];
	for (int i = 0; i < SOURCE_SLOTS; i++) {
		delete _source_slots[i];
		if (other._source_slots[i])
			_source_slots[i] = other._source_slots[i]->clone();
		else
			_source_slots[i] = nullptr;
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* type) {
	for (int i = 0; i < SOURCE_SLOTS; i++)
		if (_source_slots[i] == NULL) {
			_source_slots[i] = type;
			break;
		}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < SOURCE_SLOTS; i++)
		if (_source_slots[i] && _source_slots[i]->getType() == type)
			return _source_slots[i]->clone();
	return NULL;
}
