/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:43:40 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/18 16:19:48 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.h"
#include "../inc/IMateriaSource.h"
#include "../inc/ICharacter.h"
#include "../inc/Character.h"
#include "../inc/Cure.h"
#include "../inc/Ice.h"
#include "../inc/MateriaSource.h"

Cure::Cure(const Cure &copy): AMateria(copy._type) {
	*this = copy;
}

Cure	&Cure::operator=(const Cure &rhs) {
	_type = rhs._type;
	return (*this);
}

AMateria	*Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
