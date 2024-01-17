/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:30:57 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/17 14:57:50 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_DOG
# define H_DOG

# include "Animal.h"

class Dog: public Animal {
	public:
		Dog(void);
		Dog(const Dog &copy);
		~Dog(void);

		Dog	&operator=(const Dog &rhs);
		
		void	makeSound(void) const;
	private:
};

#endif
