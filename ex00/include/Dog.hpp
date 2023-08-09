/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:35:06 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/09 12:00:31 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		~Dog();
		Dog(Dog& otherDog);

		Dog& operator=(const Dog& otherDog);

		void	makeSound(void) const;
};

#endif
