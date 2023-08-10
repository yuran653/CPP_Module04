/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:31:47 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/10 20:34:41 by jgoldste         ###   ########.fr       */
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
		void	setType(std::string type);

	public:
		Animal();
		virtual ~Animal();
		Animal(Animal& otherAnimal);

		Animal& operator=(const Animal& otherAnimal);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
