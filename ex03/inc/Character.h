/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:29:49 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/18 16:47:23 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_CHARACTER
# define H_CHARACTER

#include "ICharacter.h"
#include "SaveAddress.h"

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
	private:
		std::string	_name;
		AMateria	*_slot[4];
		SaveAddress	**_address;
};

#endif
