/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:38:59 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/18 13:34:48 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal initialized" << std::endl;
	_type = "RandomWrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type): _type(type) {
	std::cout << "WrongAnimal initialized" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy): _type(copy._type) {
	std::cout << "WrongAnimal copy initialized" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs) {
	_type = rhs._type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << _type << ": ajfdsjfajdsfjadjf(this is the wronganimal sound)!" << std::endl;
}

void	WrongAnimal::setType(std::string type) {
	_type = type;
}

std::string	WrongAnimal::getType(void) const {
	return (_type);
}
