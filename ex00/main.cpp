/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:15:43 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/17 15:12:08 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"
#include "Cat.h"

int main(void) {
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	Dog				anotherOne;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << anotherOne.getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	anotherOne.makeSound();

	delete meta;
	delete j;
	delete i;

	return 0;
}
