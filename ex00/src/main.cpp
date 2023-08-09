/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:31:39 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/09 16:18:15 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;	

	Animal *animals[2];
	animals[0] = const_cast<Animal*>(j);
	animals[1] = const_cast<Animal*>(i);
	animals[0]->makeSound();
	animals[1]->makeSound();

	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;
	{
		Dog dog;
		Cat cat;
		Animal* animal_dog = &dog;
		Animal* animal_cat = &cat;

		
		std::cout << std::endl;

		animal_dog->makeSound();
		animal_cat->makeSound();

		std::cout << std::endl;

		Dog new_dog1(dog);
		Dog new_dog2;
		new_dog2 = dog;
		Cat new_cat1(cat);
		Cat new_cat2;
		new_cat2 = cat;

		std::cout << std::endl;

		Animal *new_animals[4];
		new_animals[0] = &new_dog1;
		new_animals[1] = &new_cat1;
		new_animals[2] = &new_dog2;
		new_animals[3] = &new_cat2;
		for (int i = 0; i < 4; i++) {
			std::cout << new_animals[i]->getType() << std::endl;
			new_animals[i]->makeSound();
		}
	}
	std::cout << std::endl;

	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_i = new WrongCat();
	std::cout << wrong_i->getType() << " " << std::endl;
	wrong_i->makeSound();
	wrong_meta->makeSound();
	delete wrong_meta;
	delete wrong_i;

	return 0;
}
