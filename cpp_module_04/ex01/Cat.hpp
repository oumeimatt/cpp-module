/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:47:41 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/05 17:45:20 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		virtual ~Cat();
		virtual void makeSound() const;
		Cat &		operator=( Cat const & rhs );
		Brain *getBrain( void );
		void setBrain(std::string str);

	private:
		Brain *brain;

};

#endif /* ************************************************************* CAT_H */