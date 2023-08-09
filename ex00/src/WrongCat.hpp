/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:55:22 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/09 16:18:25 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat& otherWrongCat);

		WrongCat& operator=(const WrongCat& otherWrongCat);

		void	makeSound(void) const;
};

#endif
