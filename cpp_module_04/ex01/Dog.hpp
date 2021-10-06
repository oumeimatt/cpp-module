/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:47:52 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/06 10:24:18 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"
class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		virtual ~Dog();
		virtual void makeSound() const;
		Dog &		operator=( Dog const & rhs );
		Brain *	getBrain( void );
		void setBrain( std:: string idea );

	private:
		Brain* brain;

};

#endif /* ************************************************************* DOG_H */