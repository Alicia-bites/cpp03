#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: ClapTrap("unamed_clap_name", 100, 50, 30), FragTrap(), ScavTrap()
{
	std::cout << DEEPPINK1 << "calling DiamondTrap constructor" << RESET << std::endl;
	name_ = "unamed";
}

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name", 100, 50, 30), FragTrap(), ScavTrap()
{
	std::cout << DEEPPINK1 << "calling DiamondTrap param constructor" << RESET << std::endl;
	name_ = name;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << DEEPPINK1 << "calling DiamondTrap destructor" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& ori)
: ClapTrap(ori), FragTrap(ori), ScavTrap(ori)
{
	std::cout << DEEPPINK1 << "calling DiamondTrap copy constructor" << RESET << std::endl;
	name_ = ori.name_;
	hitPoints_ = ori.hitPoints_;
	energyPoints_ = ori.energyPoints_;
	attackDamage_ = ori.attackDamage_;
}

// OPERATOR OVERLOADS ------------------------------------------

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& ori)
{
	std::cout << DEEPPINK1 << "calling Diamondtrap copy assignement operator" << RESET << std::endl;
	ClapTrap::operator=(ori);
	name_ = ori.name_;
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, DiamondTrap const& rhs)
{
	rhs.printAttributes(o);
	return (o);
}

// MEMBER FUNCTIONS ------------------------------------------------------------------

void		DiamondTrap::whoAmI() const
{
	std::cout << SPRINGGREEN1 << *this << RESET << std::endl;
}

void 		DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}