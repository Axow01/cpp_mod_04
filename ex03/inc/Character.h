/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:29:49 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/25 18:40:22 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_CHARACTER
# define H_CHARACTER

#include "ICharacter.h"

class Character: public ICharacter {
	public:
		Character(std::string name);
		Character(const Character &copy);
		~Character(void);

		Character	&operator=(const Character &rhs);

		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
		AMateria			*getMateriaFromInventory(int idx);
	private:
		std::string	_name;
		AMateria	*_slot[4];
};

#endif
