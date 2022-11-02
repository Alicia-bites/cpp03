#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: ClapTrap("unamed_clap_name", 100, 50, 30)
, FragTrap()
, ScavTrap()
, name_("unamed")
{
	std::cout << DEEPPINK1 << "calling DiamondTrap constructor" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name", 100, 50, 30), FragTrap(), ScavTrap()
, name_(name)
{
	std::cout << DEEPPINK1 << "calling DiamondTrap param constructor" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << DEEPPINK1 << "calling DiamondTrap destructor" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& ori)
: ClapTrap(ori), FragTrap(ori), ScavTrap(ori)
{
	std::cout << DEEPPINK1 << "calling DiamondTrap copy constructor" << RESET << std::endl;
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
	std::cout << SPRINGGREEN1
		<< " My name is = " << name_
		<< std::endl
		<< " My ClapTrap sub-object is = "
		<< ClapTrap::name_
		<< RESET
		<< std::endl;
}

void 		DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

std::string		DiamondTrap::getName() const
{
	return name_;
}

void	DiamondTrap::printAttributes(std::ostream& o) const
{
	o << STEELBLUE1
		<< "DiamondTrap printing operator overload called ---->"
		<< RESET
		<< std::endl
		<< " Name = " << name_
		<< std::endl
		<< " Clap Trap Name = "
		<< ClapTrap::name_
		<< std::endl
		<< " Hit points or health = "
		<< hitPoints_
		<< std::endl
		<< " Energy points = "
		<< energyPoints_
		<< std::endl
		<< " Attack damage = "
		<< attackDamage_
		<< std::endl;
}
