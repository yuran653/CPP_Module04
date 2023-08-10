/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:31:47 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/10 22:14:55 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	private:
		std::string	_type;

	protected:
		Animal();
		virtual ~Animal();
		Animal(Animal& otherAnimal);

		Animal& operator=(const Animal& otherAnimal);

		void	setType(std::string type);

	public:
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
