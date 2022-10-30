#ifndef SCAVTRAP_HPP
# define SCAPTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private :

	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& ori);
		ScavTrap& operator=(const ScavTrap& rhs);
		~ScavTrap();

		void	guardGate();
		void 	attack(std::string const& target);

};

#endif