/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:39:52 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/10 17:30:17 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#define SIZE 4

#include <iostream>
#include <string>
#include <sstream>

class Brain {
	private:
		std::string _ideas[SIZE];

		void	setIdeaNumber(int i);

	public:
		Brain();
		virtual ~Brain();
		Brain(Brain& otherBrain);

		Brain& operator=(const Brain& otherBrain);

		std::string	getIdea(int i);
		void		addIdea(int i, std::string str);
		void		delIdea(int i);
};

#endif
