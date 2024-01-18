/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SaveAddress.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:37:50 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/18 16:43:37 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_SAVE
# define H_SAVE

# include "AMateria.h"

class SaveAddress
{
private:
	AMateria	*_ptr;
public:
	SaveAddress(AMateria *m): _ptr(m) {}
	SaveAddress(const SaveAddress &copy): _ptr(copy._ptr) { *this = copy; }
	~SaveAddress(void) { delete _ptr; }

	SaveAddress	&operator=(const SaveAddress &rhs) {
		if (&_ptr != &rhs._ptr)
			delete _ptr;
		_ptr = rhs._ptr;
		return (*this);
	}
};

#endif
