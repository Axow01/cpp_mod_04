/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:30:57 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/17 16:55:06 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_DOG
# define H_DOG
# define RED "\e[0;31m"
# define RESET "\e[0m"

# include "Animal.h"
# include "Brain.h"

class Dog: public Animal {
	public:
		Dog(void);
		Dog(const Dog &copy);
		~Dog(void);

		Dog	&operator=(const Dog &rhs);
		
		void	makeSound(void) const;
		Brain	&getBrain(void) const;
	private:
		Brain	*_brain;
};

#endif
