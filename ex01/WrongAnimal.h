/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:35:04 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/17 15:49:02 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_WRONGANIMAL
# define H_WRONGANIMAL

# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &copy);
		~WrongAnimal(void);

		WrongAnimal	&operator=(const WrongAnimal &rhs);

		void	makeSound(void);
		std::string	getType(void) const;
		void	setType(std::string type);
	protected:
		std::string	_type;
};

#endif
