/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:56:59 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/12 16:22:39 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#define INVENTORY_SLOTS 4

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		Character();
		Character(Character& other);

		Character& operator=(const Character& other);

		const std::string	_name;
		AMateria*			_inventory_slots[INVENTORY_SLOTS];

		void	setName(const std::string& name);

	public:
		Character(const std::string name);
		~Character();

		const std::string&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
