/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:35:06 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/10 20:33:10 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal, public Brain {
	private:
		Brain* _brain;

	public:
		Dog();
		~Dog();
		Dog(Dog& otherDog);

		Dog& operator=(const Dog& otherDog);

		void	makeSound(void) const;
		void	changeType(std::string type);
};

#endif
