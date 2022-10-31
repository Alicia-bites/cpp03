# include "ScavTrap.hpp"

// default constructor
ScavTrap::ScavTrap() :
	ClapTrap("unamed", 100, 50, 20)
{
	this->name_ = "unamed";
	this->hitPoints_ = 100;
	this->attackDamage_ = 50;
	this->energyPoints_ = 20;
	std::cout << "calling ScavTrap constructor" << std::endl;
}

// constructor
ScavTrap::ScavTrap(std::string name) :
	ClapTrap(name, 100, 50, 20)
{
	this->name_ = name;
	this->hitPoints_ = 100;
	this->energyPoints_ = 50;
	this->attackDamage_ = 20;
	std::cout << "calling ScavTrap constructor" << std::endl;
}

// destructor
ScavTrap::~ScavTrap()
{
	std::cout << "calling ScavTrap destructor" << std::endl;
}

// copy constructor
ScavTrap::ScavTrap(ScavTrap const& ori) :
	ClapTrap(ori)
{
	std::cout << "calling ScavTRap copy constructor" << std::endl;
	operator=(ori);
}

std::ostream&	operator<<(std::ostream& o, ScavTrap const& rhs)
{
	rhs.printAttributes(o);
	return (o);
}