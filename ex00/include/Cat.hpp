/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:34:31 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/09 12:00:26 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		~Cat();
		Cat(Cat& otherCat);

		Cat& operator=(const Cat& otherCat);

		void	makeSound(void) const;
};

#endif
