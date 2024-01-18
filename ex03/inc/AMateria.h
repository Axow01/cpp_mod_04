/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:45:56 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/18 16:16:09 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_AMATERIA
# define H_AMATERIA

# include <iostream>
# include "ICharacter.h"

class AMateria {
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria &copy);
		virtual ~AMateria(void) {}

		AMateria	&operator=(const AMateria &rhs);

		std::string const &getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
	protected:
		std::string	_type;
};

#endif
