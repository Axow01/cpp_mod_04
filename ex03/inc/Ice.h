/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:01:24 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/18 17:10:49 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_ICE
# define H_ICE

#include "AMateria.h"

class Ice: public AMateria {
	public:
		Ice(void): AMateria("ice") {}
		Ice(const Ice &copy);
		~Ice(void) { std::cout << "ice destroy" << std::endl; }

		Ice	&operator=(const Ice &rhs);

		AMateria	*clone() const;
		void		use(ICharacter &target);
	private:
};

#endif
