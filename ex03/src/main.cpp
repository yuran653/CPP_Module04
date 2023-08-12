/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 00:53:24 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/13 02:01:49 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"

#define SIZE 5

int	main() {
	IMateriaSource* src = new MateriaSource();
	for (int i = 0; i < SIZE; i++) {
		src->learnMateria(new Ice());
		// src->learnMateria(new Cure());
	}

	ICharacter* me = new Character("me");
	AMateria* tmp;

	for (int i = 0; i < SIZE; i++) {
		tmp = src->createMateria("ice");
		me->equip(tmp);
		// tmp = src->createMateria("cure");
		// me->equip(tmp);
	}

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}

// int	main() {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;

// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter* bob = new Character("bob");

// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	for (int i = 0; i < INVENTORY_SLOTS; i++)
// 		me->unequip(i);

// 	delete bob;
// 	delete me;
// 	delete src;

// 	return 0;
// }
