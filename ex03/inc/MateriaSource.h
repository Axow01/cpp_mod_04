/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:05:58 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/18 16:15:38 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_MATERIASOURCE
# define H_MATERIASOURCE

#include "IMateriaSource.h"

class MateriaSource: public IMateriaSource {
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		~MateriaSource(void);

		MateriaSource	&operator=(const MateriaSource &rhs);

		void		learnMateria(AMateria *materia);
		AMateria	*createMateria(std::string const &type);
	private:
		AMateria	*_learnedMateria[4];
};

#endif
