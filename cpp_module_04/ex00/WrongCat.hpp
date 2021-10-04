#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{

	public:

		WrongCat();
		WrongCat( WrongCat const & src );
		virtual ~WrongCat();
		void makeSound() const;
		WrongCat &		operator=( WrongCat const & rhs );

	private:

};


#endif /* ******************************************************** WRONGCAT_H */