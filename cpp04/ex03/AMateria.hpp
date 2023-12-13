#pragma once

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(const AMateria &copy);
		AMateria(std::string const & type);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		AMateria &operator=(const AMateria &copy);
		virtual ~AMateria();
};
