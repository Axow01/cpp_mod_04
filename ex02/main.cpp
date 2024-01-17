/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:15:43 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/17 17:18:02 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"

int main(void) {
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	Dog				dd;
	Cat				cc;
	Animal			*arr[4];
	// Animal			test; // This should not work, if uncommented.

	Dog	ddCopy = dd;
	Cat	ccCopy = cc;

	if (&ddCopy == &dd && &ccCopy == &cc)
		std::cout << RED << "This is not a deep copy!" << RESET << std::endl;
	else
		std::cout << RED << "These are deep copy!" << RESET << std::endl;

	for (int i = 0; i < 2; i++) {
		arr[i] = new Dog();
	}
	for (int i = 2; i < 4; i++) {
		arr[i] = new Cat();
	}

	delete j;
	delete i;

	for (int i = 0; i < 4; i++) {
		delete arr[i];
	}

	return 0;
}
