/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:57:14 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/13 02:28:10 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "Default MateriaSource constructor calls" << std::endl;
	for (int i = 0; i < SOURCE_SLOTS; i++)
		_source_slots[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource& other) {
	std::cout << "Copy MateriaSource constructor calls" << std::endl;
	// *this = other;
	for (int i = 0; i < SOURCE_SLOTS; i++) {
		if (_source_slots[i])
			std::cout << "Copy: _source_slots[" << i << "]: ["
				<< &_source_slots[i] << "] value [" << _source_slots[i]->getType()
				<< "]" << std::endl;
		delete _source_slots[i];
		if (other._source_slots[i])
			_source_slots[i] = other._source_slots[i]->clone();
		else
			_source_slots[i] = NULL;
	}
	// for (int i = 0; i < FLOOR_SIZE; i++) {
	// 	if (_floor[i])
	// 		std::cout << "Copy: _floor[" << i << "]: ["
	// 			<< &_floor[i] << "] value [" << _floor[i]->getType()
	// 			<< "]" << std::endl;
	// 	delete _floor[i];
	// 	if (other._floor[i])
	// 		_floor[i] = other._floor[i]->clone();
	// 	else
	// 		_floor[i] = NULL;
	// }
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor calls" << std::endl;
	for (int i = 0; i < SOURCE_SLOTS; i++) {
		if (_source_slots[i])
			std::cout << "Destructor: _source_slots[" << i << "]: ["
				<< &_source_slots[i] << "] value [" << _source_slots[i]->getType()
				<< "]" << std::endl;
		delete _source_slots[i];
		_source_slots[i] = NULL;
	}
	// for (int i = 0; i < FLOOR_SIZE; i++) {
	// 	if (_floor[i])
	// 		std::cout << "Destructor: _floor[" << i << "]: ["
	// 			<< &_floor[i] << "] value [" << _floor[i]->getType()
	// 			<< "]" << std::endl;
	// 	delete _floor[i];
	// 	_floor[i] = NULL;
	// }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	std::cout << "MateriaSource overload assignment operator calls" << std::endl;
	if (this == &other)
		return *this;
	// for (int i = 0; i < SOURCE_SLOTS; i++)
	// 	_source_slots[i] = other._source_slots[i];
	for (int i = 0; i < SOURCE_SLOTS; i++) {
		if (_source_slots[i])
			std::cout << "Operator: _source_slots[" << i << "]: ["
				<< &_source_slots[i] << "] value [" << _source_slots[i]->getType()
				<< "]" << std::endl;
		delete _source_slots[i];
		if (other._source_slots[i])
			_source_slots[i] = other._source_slots[i]->clone();
		else
			_source_slots[i] = NULL;
	// 	if (_floor[i])
	// 		std::cout << "Operator: _floor[" << i << "]: ["
	// 			<< &_floor[i] << "] value [" << _floor[i]->getType()
	// 			<< "]" << std::endl;
	// 	delete _floor[i];
	// 	if (other._floor[i])
	// 		_floor[i] = other._floor[i]->clone();
	// 	else
	// 		_floor[i] = NULL;
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* type) {
	// bool created = false;
	for (int i = 0; i < SOURCE_SLOTS; i++)
		if (_source_slots[i] == NULL) {
			_source_slots[i] = type;
			// std::cout << "LearnMateria learned [" << &type << "]" << std::endl;
			// created = true;
			break;
		}
	// if (created == false)
	// 	std::cout << "LearnMateria not learned [" << &type << "]" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	int created = false;
	for (int i = 0; i < SOURCE_SLOTS; i++)
		if (_source_slots[i] == NULL && _source_slots[i]->getType() == type) {
			created = true;
			AMateria* new_materia = _source_slots[i]->clone();
			std::cout << "createMateria TRUE [" << new_materia << "]"
				<< "at _source_slots[" << i << "]" << std::endl;
			return new_materia;
			// return _source_slots[i]->clone();
		}
	if (created == false)
		std::cout << "createMateria FALSE [" << &type << "]" << std::endl;
	return NULL;
}

// void	MateriaSource::dropMateria(AMateria* type) {
// 	for (int i = 0; i < FLOOR_SIZE; i++) {
// 		if (_floor[i] == NULL) {
// 			_floor[i] = type;
// 		} else {

// 		}
// 	}
// }

// void	MateriaSource::deleteMateria(AMateria* array, size_t size) {
	
// }
