/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:48:14 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/10 22:19:28 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	// {
	// 	Animal a;
	// 	Animal b(a);
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();
	// 	delete j;
	// 	delete i;
	// 	std::cout << std::endl;
	// }

	Dog* dog = new Dog();
	Cat* cat = new Cat();

	for (int i = 0; i < SIZE; i++) {
		dog->addIdea(i, "belongs to " + dog->getType());
		cat->addIdea(i, "belongs to " + cat->getType());
	}

	dog->changeType("Puppy");
	Dog* dog_assign = new Dog();
	*dog_assign = *dog;

	cat->changeType("Kitty");
	Cat* cat_copy = new Cat(*cat);

	for (int i = 0; i < SIZE; i++) {
		dog_assign->addIdea(i, ". " + dog_assign->getType() + " says BARK-BARK");;
		cat_copy->addIdea(i, ". " + cat_copy->getType() + " says MEOW-MEOW");
	}

	for (int i = 0; i < SIZE; i++) {
		if (i % 2 == 0) {
			std::cout << dog->getIdea(i) << std::endl;
			std::cout << dog_assign->getIdea(i) << std::endl;
		} else {
			std::cout << cat->getIdea(i) << std::endl;
			std::cout << cat_copy->getIdea(i) << std::endl;
		}
	}

	delete dog;
	delete cat;
	delete dog_assign;
	delete cat_copy;
	
	return 0;
}
