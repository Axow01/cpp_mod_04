/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:47:39 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/18 16:19:35 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.h"
#include "../inc/IMateriaSource.h"
#include "../inc/ICharacter.h"
#include "../inc/Character.h"
#include "../inc/Cure.h"
#include "../inc/Ice.h"
#include "../inc/MateriaSource.h"

AMateria::AMateria(std::string const &type): _type(type) {

}

AMateria::AMateria(const AMateria &copy): _type(copy._type) {
	*this = copy;
}

AMateria	&AMateria::operator=(const AMateria &rhs) {
	_type = rhs._type;
	return (*this);
}

std::string const	&AMateria::getType() const {
	return (_type);
}

void	AMateria::use(ICharacter &target) {
	std::cout << "* " << _type << " used on " << target.getName() << " *" << std::endl;
}
