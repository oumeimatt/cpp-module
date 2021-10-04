#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
class Dog : virtual public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		virtual ~Dog();
		virtual void makeSound() const;
		Dog &		operator=( Dog const & rhs );

	private:

};

#endif /* ************************************************************* DOG_H */