/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:53:16 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/14 20:30:00 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_HPP
#define FLOOR_HPP

#define FLOOR_SIZE 1000

#include "AMateria.hpp"

class AMateria;

class Floor {
	private:
		Floor();
		~Floor();

		AMateria*		_floor[FLOOR_SIZE];
		size_t	_size;

	public:
		static Floor&	getInstance();
		void			dropMateria(AMateria* type);

};

#endif
