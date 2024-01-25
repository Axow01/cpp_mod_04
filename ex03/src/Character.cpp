/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:34:21 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/25 18:40:43 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.h"
#include "../inc/IMateriaSource.h"
#include "../inc/ICharacter.h"
#include "../inc/Character.h"
#include "../inc/Cure.h"
#include "../inc/Ice.h"
#include "../inc/MateriaSource.h"

Character::Character(std::string name): _name(name) {
	for (int i = 0; i < 4; i++) {
		_slot[i] = NULL;
	}
}

Character::Character(const Character &copy): _name(copy._name) {
	for (int i = 0; i < 4; i++) {
		_slot[i] = copy._slot[i]->clone();
	}
	*this = copy;
}

Character::~Character(void) {
	std::cout << "del character called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (_slot[i]) {
			delete _slot[i];
		}
	}
}

Character	&Character::operator=(const Character &rhs) {
	_name = rhs._name;
	for (int i = 0; i < 4; i++) {
		if (_slot[i])
			delete _slot[i];
		_slot[i] = rhs._slot[i]->clone();
	}
	return (*this);
}

std::string const	&Character::getName() const {
	return (_name);
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (!_slot[i]) {
			_slot[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx < 4 && idx >= 0) {
		if (_slot[idx])
			_slot[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target) {
	if (idx < 4 && _slot[idx])
		_slot[idx]->use(target);
}

AMateria	*Character::getMateriaFromInventory(int idx) {
	return (this->_slot[idx]);
}
