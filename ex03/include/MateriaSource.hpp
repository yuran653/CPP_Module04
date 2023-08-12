/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:57:10 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/13 00:50:25 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#define SOURCE_SLOTS 4
#define FLOOR_SIZE 100

#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria*	_source_slots[SOURCE_SLOTS];
		// AMateria*	_floor[FLOOR_SIZE];

	public:
		MateriaSource();
		MateriaSource(MateriaSource& other);
		~MateriaSource();

		MateriaSource& operator=(const MateriaSource& other);

		void		learnMateria(AMateria* type);
		AMateria*	createMateria(const std::string& type);
		// void		dropMateria(AMateria* type);
		// void		deleteMateria(AMateria* array, size_t size);
};

#endif
