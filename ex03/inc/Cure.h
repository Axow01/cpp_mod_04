/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:35:56 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/18 16:14:22 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_CURE
# define H_CURE

#include "AMateria.h"

class Cure: public AMateria {
	public:
		Cure(void): AMateria("cure") {}
		Cure(const Cure &copy);
		~Cure(void) {}

		Cure	&operator=(const Cure &rhs);

		AMateria	*clone() const;
		void		use(ICharacter &target);
	private:
};

#endif
