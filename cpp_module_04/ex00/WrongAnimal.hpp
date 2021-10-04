#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal 
{

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal();

		WrongAnimal &		operator=( WrongAnimal const & rhs );
		virtual std::string getType( void ) const;
		void makeSound() const;

	protected:
		WrongAnimal( std::string type );
		std::string _Type;
};

#endif /* ***************************************************** WRONGANIMAL_H */