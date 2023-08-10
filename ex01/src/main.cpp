/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:48:14 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/10 17:38:45 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	Dog* dog = new Dog();
	Cat* cat = new Cat();

	for (int i = 0; i < SIZE; i++) {
		dog->addIdea(i, "belongs to " + dog->getType());
		cat->addIdea(i, "belongs to " + cat->getType());
	}

	for (int i = 0; i < SIZE; i++) {
		if (i % 2 == 0)
			std::cout << dog->getIdea(i) << std::endl;
		else
			std::cout << cat->getIdea(i) << std::endl;
	}

	delete dog;
	delete cat;
	
	return 0;
}
