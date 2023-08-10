/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:34:31 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/11 00:44:08 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal, public Brain {
	private:
		Brain* _brain;

	public:
		Cat();
		~Cat();
		Cat(Cat& otherCat);

		Cat& operator=(const Cat& otherCat);

		void	makeSound(void) const;
		void	changeType(std::string type);
};

#endif
