/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:53:50 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/09 16:07:21 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	private:
		std::string	_type;

	protected:
		void	setType(std::string type);

	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal& otherWrongAnimal);

		WrongAnimal& operator=(const WrongAnimal& otherWrongAnimal);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
