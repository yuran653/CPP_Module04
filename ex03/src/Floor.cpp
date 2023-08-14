/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:54:32 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/14 23:00:52 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor() {
	_size = 0;
}

Floor::~Floor() {
	for (size_t i = 0; i < _size; i++) {
		delete _floor[i];
		_floor[i] = NULL;
	}
}

Floor& Floor::getInstance() {
	static Floor instance;
	return instance;
}

void	Floor::dropMateria(AMateria* type) {
	if (_size == 1000)
		_size = 0;
	_floor[_size] = type;
	_size++;
}
