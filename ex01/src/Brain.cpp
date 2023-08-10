/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:40:07 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/10 17:27:46 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < SIZE; i++)
		setIdeaNumber(i);
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain& otherBrain) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = otherBrain;
}

Brain& Brain::operator=(const Brain& otherBrain) {
	std::cout << "Brain overload assignment operator is called" << std::endl;
	if (this == &otherBrain)
		return *this;
	for (int i = 0; i < SIZE; i++)
		_ideas[i] = otherBrain._ideas[i];
	return *this;
}

void	Brain::setIdeaNumber(int i) {
	std::ostringstream oss;
	oss << i + 1;
	std::string str = oss.str();
	if (i < 9)
		_ideas[i] = "Idea #00" + str + ": ";
	else if (i < 99)
		_ideas[i] = "Idea #0" + str + ": ";
	else
		_ideas[i] = "Idea #" + str + ": ";
}

std::string	Brain::getIdea(int i) {
	return _ideas[i];
}

void		Brain::addIdea(int i, std::string str) {
	_ideas[i] = _ideas[i] + str;
}

void		Brain::delIdea(int i) {
	_ideas[i] = "";
	setIdeaNumber(i);
}
