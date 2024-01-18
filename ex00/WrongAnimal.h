/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:35:04 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/18 13:34:30 by mmarcott         ###   ########.fr       */
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
		virtual ~WrongAnimal(void);

		WrongAnimal	&operator=(const WrongAnimal &rhs);

		void	makeSound(void) const;
		std::string	getType(void) const;
		void	setType(std::string type);
	protected:
		std::string	_type;
};

#endif
