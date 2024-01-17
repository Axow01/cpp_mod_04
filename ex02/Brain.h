/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:05:01 by mmarcott          #+#    #+#             */
/*   Updated: 2024/01/17 16:12:10 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_BRAIN
# define H_BRAIN

#include <iostream>

class Brain {
	public:
		Brain(void);
		Brain(const Brain &copy);
		~Brain(void);

		Brain	&operator=(const Brain &rhs);

		void		setIdea(int index, std::string idea);
		std::string	getIdea(int index) const;
	private:
		std::string	_ideas[100];
};

#endif
