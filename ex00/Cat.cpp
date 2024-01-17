/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:42:03 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/17 14:58:03 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat(void): Animal("Cat") {
	std::cout << _type << " initialized" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy._type) {
	*this = copy;
}

Cat::~Cat(void) {
	std::cout << _type << " destroyed!" <<std::endl;
}

Cat	&Cat::operator=(const Cat &rhs) {
	_type = rhs._type;
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << _type << ": miow miooow!" << std::endl;
}
