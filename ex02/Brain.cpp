/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:11:32 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/25 17:20:20 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

Brain::Brain(void) {
	std::cout << "Brain initialized!" << std::endl;
}

Brain::Brain(const Brain &copy) {
	*this = copy;
}

Brain::~Brain(void) {
	std::cout << "Brain destroyed!" << std::endl;
}

Brain	&Brain::operator=(const Brain &rhs) {
	for (int i = 0; i < 100; i++) {
		_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

void	Brain::setIdea(int index, std::string idea) {
	_ideas[index] = idea;
}

std::string	Brain::getIdea(int index) const {
	return (_ideas[index]);
}
