/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:15:43 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/25 18:00:30 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.h"
#include "../inc/IMateriaSource.h"
#include "../inc/ICharacter.h"
#include "../inc/Character.h"
#include "../inc/Cure.h"
#include "../inc/Ice.h"
#include "../inc/MateriaSource.h"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++) {
		_learnedMateria[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	for (int i = 0; i < 4; i++) {
		_learnedMateria[i] = copy._learnedMateria[i]->clone();
	}
	*this = copy;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++) {
		if (_learnedMateria[i])
			delete _learnedMateria[i];
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs) {
	for (int i = 0; i < 4; i++) {
		if (_learnedMateria[i])
			delete _learnedMateria[i];
		_learnedMateria[i] = rhs._learnedMateria[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < 4; i++) {
		if (!_learnedMateria[i]) {
			_learnedMateria[i] = materia->clone();
			delete materia;
			break;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (_learnedMateria[i] && _learnedMateria[i]->getType() == type)
			return (_learnedMateria[i]->clone());
	}
	return (0);
}
