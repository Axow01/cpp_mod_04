/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:45:34 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/18 13:36:48 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"

WrongCat::WrongCat(void): WrongAnimal("WrongCat") {
	std::cout << _type << " initialized" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy._type) {
	std::cout << _type << " initialized" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat(void) {
	std::cout << _type << " destroyed" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs) {
	_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "Wrong cat makes noises!" << std::endl;
}
