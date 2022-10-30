# include "ScavTrap.hpp"

// default constructor
ScavTrap::ScavTrap() :
	ClapTrap("", 100, 50, 20)
{
	std::cout << "calling ScavTrap constructor" << std::endl;
}

// constructor
ScavTrap::ScavTrap(std::string name) :
	ClapTrap(name, 100, 50, 20)
{
	std::cout << "calling ScavTrap param constructor" << std::endl;
}

// destructor
ScavTrap::~ScavTrap()
{
	std::cout << "calling ScavTrap destructor" << std::endl;
}

// copy constructor
ScavTrap::ScavTrap(ScavTrap const& cl)
{
	std::cout << "calling ScavTRap operator =" << std::endl;
	operator=(cl);
}

std::ostream&	operator<<(std::ostream& o, ScavTrap const& cl)
{
	return (o);
}