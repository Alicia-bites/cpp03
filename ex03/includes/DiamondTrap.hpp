#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string		name_;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& ori);
		~DiamondTrap();
		DiamondTrap&	operator=(DiamondTrap const&);

		std::string		getName() const;
		void 			attack(std::string const& target);
		void			whoAmI() const;
		void			printAttributes(std::ostream& o) const;
};

std::ostream&	operator<<(std::ostream& o, DiamondTrap const& rhs);
#endif