/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:56:36 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/12 17:00:25 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		AMateria();
		AMateria(AMateria& other);
		virtual ~AMateria();

		AMateria& operator=(const AMateria& other);

		const std::string	_type;
		
		void	setType(const std::string& type);

	public:
		AMateria(const std::string& type);

		const std::string&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
