# include "ScavTrap.hpp"

// default constructor
ScavTrap::ScavTrap() :
	ClapTrap("unamed", 100, 50, 20)
{
	this->name_ = "unamed";
	this->hitPoints_ = 100;
	this->attackDamage_ = 50;
	this->energyPoints_ = 20;
	this->gateKeepin_ = 0;
	std::cout << SPRINGGREEN2 << "calling ScavTrap constructor" << RESET << std::endl;
}

// constructor
ScavTrap::ScavTrap(std::string name) :
	ClapTrap(name, 100, 50, 20)
{
	this->name_ = name;
	this->hitPoints_ = 100;
	this->energyPoints_ = 50;
	this->attackDamage_ = 20;
	this->gateKeepin_ = 0;
	std::cout << SPRINGGREEN2 << "calling ScavTrap constructor" << RESET << std::endl;
}

// destructor
ScavTrap::~ScavTrap()
{
	std::cout << SPRINGGREEN2 << "calling ScavTrap destructor" <<  RESET << std::endl;
}

// copy constructor
ScavTrap::ScavTrap(ScavTrap const& ori) :
	ClapTrap(ori)
{
	std::cout << SPRINGGREEN2 << "calling ScavTRap copy constructor" << RESET << std::endl;
	operator=(ori);
	this->gateKeepin_ = ori.gateKeepin_;
}

std::ostream&	operator<<(std::ostream& o, ScavTrap const& rhs)
{
	rhs.printAttributes(o);
	o << rhs.getGate();
	return (o);
}

void	ScavTrap::guardGate()
{
	if (energyPoints_ >= 1)
	{
		if (gateKeepin_ == 0)
		{
			std::cout << DARKOLIVEGREEN3 << name_ << " is guarding the gate." << RESET << std::endl;
			gateKeepin_ = 1;
		}
		else if (gateKeepin_ == 1)
		{
			std::cout << DARKOLIVEGREEN3 << name_ << " is not guarding the gate anymore." << RESET << std::endl;
			gateKeepin_ = 0;
		}
	}
	else
		std::cout << ORANGERED1 << "Can't keep the gate! Not enough energy points!" << RESET << std::endl;

}

int	ScavTrap::getGate() const
{
	return gateKeepin_;
}