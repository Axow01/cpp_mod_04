/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:42:03 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/17 17:08:15 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat(void): Animal("Cat") {
	_brain = new Brain();
	std::cout << _type << " initialized" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy._type), _brain(new Brain(*copy._brain)) {
	*this = copy;
}

Cat::~Cat(void) {
	delete _brain;
	std::cout << _type << " destroyed!" <<std::endl;
}

Cat	&Cat::operator=(const Cat &rhs) {
	delete _brain;
	_type = rhs._type;
	_brain = new Brain(*rhs._brain);
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << _type << ": miow miooow!" << std::endl;
}

Brain	&Cat::getBrain(void) const {
	return (*_brain);
}
