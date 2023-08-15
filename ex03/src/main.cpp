/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 00:53:24 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/15 16:38:57 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"

#define SIZE 100

int	main() {
	IMateriaSource* src1 = new MateriaSource();
	for (int i = 0; i < SIZE; i++) {
		src1->learnMateria(new Ice());
		src1->learnMateria(new Cure());
	}

	ICharacter* me1 = new Character("me1");
	AMateria* tmp;

	for (int i = 0; i < SIZE; i++) {
		tmp = src1->createMateria("ice");
		me1->equip(tmp);
		tmp = src1->createMateria("fire");
		me1->equip(tmp);
		tmp = src1->createMateria("cure");
		me1->equip(tmp);
	}

	MateriaSource* src2 = new MateriaSource();
	for (int i = 0; i < SIZE; i++) {
		src2->learnMateria(new Ice());
		src2->learnMateria(new Cure());
	}
	MateriaSource* src3 = new MateriaSource();
	*src3 = *src2;
	MateriaSource* src4 = new MateriaSource(*src3);

	Character* me2 = new Character("me2");
	
	for (int i = 0; i < SIZE; i++) {
		me2->equip(src4->createMateria("ice"));
		me2->equip(src4->createMateria("fire"));
		me2->equip(src4->createMateria("cure"));
	}

	Character* bob1 = new Character("bob");
	Character* bob2 = new Character();
	*bob2 = *bob1;
	Character* bob3 = new Character("not bob");
	Character* bob4 = new Character(*bob3);
	
	me1->use(0, *bob1);
	me1->use(1, *bob2);

	me2->use(2, *bob3);
	me2->use(3, *bob4);

	me1->use(4, *bob1);
	me2->use(4, *bob1);

	for (int i = 0; i < (SIZE * 1000) + 1; i++)
		me1->unequip(i);

	delete bob1;
	delete bob2;
	delete bob3;
	delete bob4;
	delete me1;
	delete me2;
	delete src1;
	delete src2;
	delete src3;
	delete src4;

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