/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:00:12 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/04 10:35:07 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();

		Animal & operator=( Animal const & rhs );
		virtual std::string getType( void ) const;
		virtual void makeSound() const;

	protected:
		Animal( std::string type );
		std::string _Type;

};


#endif /* ********************************************************** ANIMAL_H */