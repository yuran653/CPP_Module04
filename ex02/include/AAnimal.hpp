/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:31:47 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/11 00:42:46 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
	private:
		std::string	_type;

	protected:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(AAnimal& otherAAnimal);

		AAnimal& operator=(const AAnimal& otherAAnimal);

		void	setType(std::string type);

	public:
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
