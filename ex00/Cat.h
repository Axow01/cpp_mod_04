/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:41:04 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/17 14:57:57 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_CAT
# define H_CAT

# include "Animal.h"

class Cat: public Animal {
	public:
		Cat(void);
		Cat(const Cat &copy);
		~Cat(void);

		Cat	&operator=(const Cat &rhs);
		
		void	makeSound(void) const;
	private:
};

#endif
