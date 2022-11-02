# include "ScavTrap.hpp"

// default constructor
ScavTrap::ScavTrap()
: ClapTrap("unamed", 100, 50, 20)
{
	this->name_ = "unamed";
	this->hitPoints_ = 100;
	this->energyPoints_ = 50;
	this->attackDamage_ = 20;
	this->gateKeepin_ = 0;
	std::cout << SPRINGGREEN2 << "calling ScavTrap constructor" << RESET << std::endl;
}

// constructor
ScavTrap::ScavTrap(std::string name)
: ClapTrap(name, 100, 50, 20)
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
ScavTrap::ScavTrap(ScavTrap const& ori)
: ClapTrap(ori)
{
	std::cout << SPRINGGREEN2 << "calling ScavTRap copy constructor" << RESET << std::endl;
	ClapTrap::operator=(ori);
	this->gateKeepin_ = ori.gateKeepin_;
}

// OPERATOR OVERLOADS ------------------------------------------

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs);
		this->gateKeepin_ = rhs.gateKeepin_;
	}
	return *this;
}

std::ostream&	operator<<(std::ostream& o, ScavTrap const& rhs)
{
	rhs.printAttributes(o);
	o << " Is " << rhs.getName() << " in gate keeper mode? 1 for yes, 0 for no --> " << rhs.getGate();
	return (o);
}

// MEMBER FUNCTIONS ------------------------------------------

void	ScavTrap::guardGate()
{
	if (energyPoints_ >= 1)
	{
		if (gateKeepin_ == 0)
		{
			std::cout << DARKOLIVEGREEN3 << name_ << " is in gate keeper mode." << RESET << std::endl;
			gateKeepin_ = 1;
		}
		else if (gateKeepin_ == 1)
		{
			std::cout << DARKOLIVEGREEN3 << name_ << " is not in gate keeper mode anymore." << RESET << std::endl;
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

void	ScavTrap::attack(const std::string& target)
{
	std::cout << STEELBLUE4 << "ScavTrap is trying to attack..." << RESET << std::endl;
	if (energyPoints_ >= 1)
	{
		std::cout << SLATEBLUE1
			<< "SUCCESS!"
			<< std::endl
			<< "ScavTrap "
			<< name_ 
			<< " attacks " 
			<< target 
			<< " causing "
			<< DEEPPINK1
			<< attackDamage_
			<< SLATEBLUE1
			<< " points of damage!"
			<< RESET
			<< std::endl;
		energyPoints_ -= 1;
	}
	else
		std::cout << ORANGERED1 << "FAILURE! Not enough energy points!" << RESET << std::endl;
}