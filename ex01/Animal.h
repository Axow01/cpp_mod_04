/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:17:51 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/17 15:07:06 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_ANIMAL
# define H_ANIMAL

# include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &copy);
		virtual ~Animal(void);

		Animal	&operator=(const Animal &rhs);

		virtual void	makeSound(void) const;
		void			setType(const std::string &type);
		std::string		getType(void) const;
	protected:
		std::string	_type;
};

#endif
