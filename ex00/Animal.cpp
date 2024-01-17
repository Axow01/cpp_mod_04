/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:21:11 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/17 14:56:28 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal(void): _type("SomeAnimal") {
	std::cout << "Animal just initialized!" << std::endl;
}

Animal::Animal(std::string type): _type(type) {
	std::cout << "Animal just initialized!" << std::endl;
}

Animal::Animal(const Animal &copy): _type(copy._type) {
	*this = copy;
}

Animal::~Animal(void) {
	std::cout << "Animal destroyed!" << std::endl;
}

Animal	&Animal::operator=(const Animal &rhs) {
	_type = rhs._type;
	return (*this);
}

void	Animal::makeSound(void) const {
	std::cout << _type << ": akdjfalkdjfalkdsf!" << std::endl;
}

void	Animal::setType(const std::string &type) {
	_type = type;
}

std::string	Animal::getType(void) const {
	return (_type);
}
