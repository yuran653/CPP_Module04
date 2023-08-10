/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:34:31 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/10 20:33:02 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal, public Brain {
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
