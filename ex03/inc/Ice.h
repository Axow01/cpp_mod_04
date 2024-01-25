/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:01:24 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/25 18:07:36 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_ICE
# define H_ICE

#include "AMateria.h"

class Ice: public AMateria {
	public:
		Ice(void): AMateria("ice") {}
		Ice(const Ice &copy);
		~Ice(void) {}

		Ice	&operator=(const Ice &rhs);

		AMateria	*clone() const;
		void		use(ICharacter &target);
	private:
};

#endif
