/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:56:59 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/14 01:51:46 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#define INVENTORY_SLOTS 4

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		const std::string	_name;
		AMateria*			_inventory_slots[INVENTORY_SLOTS];

		void	setName(const std::string& name);

	public:
		Character();
		Character(const std::string name);
		Character(Character& other);
		~Character();

		Character& operator=(const Character& other);

		const std::string&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
