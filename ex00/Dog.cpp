/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:30:55 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/17 14:58:09 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog(void): Animal("Dog") {
	std::cout << _type << " initialized!" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy._type) {
	*this = copy;
}

Dog::~Dog(void) {
	std::cout << _type << " destroyed!" << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs) {
	_type = rhs._type;
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << _type << ": wooof woof" << std::endl;
}
