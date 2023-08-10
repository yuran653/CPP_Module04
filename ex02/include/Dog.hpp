/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:35:06 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/11 00:44:25 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal, public Brain {
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
