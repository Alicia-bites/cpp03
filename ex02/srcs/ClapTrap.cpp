#include "ClapTrap.hpp"

// default constructor
ClapTrap::ClapTrap()
: name_("unamed")
, hitPoints_(10)
, energyPoints_(10)
, attackDamage_(0)
{
	std::cout << SKYBLUE1 << "default constructor called" << RESET << std::endl;
}

// constructor
ClapTrap::ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage)
: hitPoints_(hitPoints)
, energyPoints_(energyPoints)
, attackDamage_(attackDamage)
{
	std::cout << SKYBLUE1 << "second constructor called" << RESET << std::endl;
	if (name == "")
	{
		std::cerr << "Name can't be an empty string. I'll choose the name... Benny." << std::endl;
		name_ = "Benny";
	}
	else
		name = name_;
}

// other constructor
ClapTrap::ClapTrap(std::string name)
: name_(name)
, hitPoints_(10)
, energyPoints_(10)
, attackDamage_(0)
{}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap& ori)
{
	std::cout << SKYBLUE1 << "copy constructor called" << RESET << std::endl;
	*this = ori;
}

// destructor
ClapTrap::~ClapTrap()
{
	std::cout << SKYBLUE1 << "destructor called" << RESET << std::endl;
}

// OPERATOR OVERLOADS ------------------------------------------

// copy assignement operator
ClapTrap &ClapTrap::operator=(const ClapTrap& rhs)
{
	if (this != &rhs)
	{
		this->name_ = rhs.name_;
		this->hitPoints_ = rhs.hitPoints_;
		this->energyPoints_ = rhs.energyPoints_;
		this->attackDamage_ = rhs.attackDamage_;
	}
	return *this;
}

// << overload
std::ostream &operator<<(std::ostream& o, ClapTrap& rhs)
{
	rhs.printAttributes(o);
	return o;
}

// ACTION FUNCTIONS -------------------------------------------------------------------------

void	ClapTrap::attack(const std::string& target)
{
	std::cout << STEELBLUE4 << "Trying to attack..." << RESET << std::endl;
	if (energyPoints_ >= 1)
	{
		std::cout << SLATEBLUE1
			<< "SUCCESS!"
			<< std::endl
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << SLATEBLUE2
		<< name_
		<< " takes "
		<< DEEPPINK1
		<< amount
		<< SLATEBLUE2
		<< " points of damage!"
		<< RESET
		<< std::endl;
	if (amount < hitPoints_)
		hitPoints_ -= amount;
	else
	{
		hitPoints_ = 0;
		std::cout << SPRINGGREEN1 << name_ << " is dead." << RESET << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << STEELBLUE4 << "Trying to repair..." << RESET << std::endl;
	if (energyPoints_ >= 1)
	{
		std::cout << SLATEBLUE3
			<< "SUCCESS!"
			<< std::endl
			<< name_
			<< " regain "
			<< DEEPPINK1
			<< amount
			<< SLATEBLUE3
			<< " hitPoints!"
			<< RESET
			<< std::endl;
		energyPoints_ -= 1;
		if (hitPoints_ == 0)
			std::cout << SPRINGGREEN1 << name_ << " is back to life!" << std::endl;
		hitPoints_ += amount;
	}
	else
		std::cout << ORANGERED1 << "FAILURE! Not enough energy points!" << RESET << std::endl;
}

// - GETTERS -------------------------------------------------
std::string	&ClapTrap::getName()  
{
	return name_;
}

unsigned int	ClapTrap::getHitPoints() const
{
	return hitPoints_;
}

unsigned int	ClapTrap::getEnergyPoints() const
{
	return energyPoints_;
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return attackDamage_;
}

void	ClapTrap::printAttributes(std::ostream& o) const
{
	o << STEELBLUE1
		<< "Printing operator overload called ---->"
		<< RESET
		<< std::endl
		<< " Name = " << name_
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