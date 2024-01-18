/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:47:34 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/18 17:13:31 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.h"
#include "../inc/IMateriaSource.h"
#include "../inc/ICharacter.h"
#include "../inc/Character.h"
#include "../inc/Cure.h"
#include "../inc/Ice.h"
#include "../inc/MateriaSource.h"

int	main(void) {
	IMateriaSource	*src = new MateriaSource();
	ICharacter		*me = new Character("me");
	ICharacter		*bob = new Character("bob");
	AMateria		*tmp;
	Ice				*ice = new Ice();

	src->learnMateria(ice);
	src->learnMateria(new Cure());
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return (0);
}
