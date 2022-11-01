#ifndef SCAVTRAP_HPP
# define SCAPTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private :
		int	gateKeepin_;

	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& ori);
		ScavTrap& operator=(const ScavTrap& rhs);
		~ScavTrap();

		void	guardGate();
		int		getGate() const;
		void	attack(const std::string& target);
};

std::ostream&	operator<<(std::ostream& o, ScavTrap const& rhs);
#endif