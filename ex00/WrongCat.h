/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:45:47 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/18 13:36:09 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_WRONGCAT
# define H_WRONGCAT

#include "WrongAnimal.h"

class WrongCat: public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(const WrongCat &copy);
		~WrongCat(void);

		WrongCat	&operator=(const WrongCat &rhs);

		void	makeSound(void) const;
	private:
};

#endif
