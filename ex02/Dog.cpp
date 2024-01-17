/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:30:55 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/17 17:08:56 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog(void): Animal("Dog") {
	_brain = new Brain();
	std::cout << _type << " initialized!" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy._type), _brain(new Brain(*copy._brain)) {
	*this = copy;
}

Dog::~Dog(void) {
	delete _brain;
	std::cout << _type << " destroyed!" << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs) {
	delete _brain;
	_type = rhs._type;
	_brain = new Brain(*rhs._brain);
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << _type << ": wooof woof" << std::endl;
}

Brain	&Dog::getBrain(void) const {
	return (*_brain);
}
