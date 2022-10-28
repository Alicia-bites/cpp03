#include "ClapTrap.hpp"

// default constructor
ClapTrap::ClapTrap()
{
	std::cout << SKYBLUE1 << "default constructor called" << RESET << std::endl;
}

// constructor
ClapTrap::ClapTrap(std::string name)
: name_(name)
, hitPoints_(10)
, energyPoints_(10)
, attackDamage_(0)
{
	std::cout << SKYBLUE2 << "constructor called" << RESET << std::endl;
}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap& ori)
: name_(ori.name_)
{
	std::cout << SKYBLUE3 << "copy constructor called" << RESET << std::endl;

}

// destructor
ClapTrap::~ClapTrap()
{
	std::cout << SPRINGGREEN6 << "destructor called" << RESET << std::endl;
}

// copy assignement operator
ClapTrap &ClapTrap::operator=(const ClapTrap& rhs)
{
	this->name_ = rhs.name_;
	this->hitPoints_ = rhs.hitPoints_;
	this->energyPoints_ = rhs.energyPoints_;
	this->attackDamage_ = rhs.attackDamage_;
	return *this;
}

// FUNCTIONS -------------------------------------------------------------------------

void	ClapTrap::attack(const std::string& target)
{
	if (energyPoints_ >= 3)
	{
		std::cout << SLATEBLUE1
			<< name_ 
			<< " attacks " 
			<< target 
			<< " causing " 
			<< attackDamage_
			<< " of damage!"
			<< RESET
			<< std::endl;
		energyPoints_ -= 3;
	}
	else
		displayMsg(NO_ENERGY);
}

void	displayMsg(int msg)
{
	if (msg == NO_ENERGY)
		std::cout << "Not enough energy points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << SLATEBLUE2
		<< name_
		<< " takes "
		<< amount
		<< "damages"
		<< RESET
		<< std::endl;
	if ((hitPoints_ - amount) > 0)
		hitPoints_ -= amount;
	else
		std::cout << name_ << "is dead." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) const
{
	std::cout << SLATEBLUE3
		<< name_;
		<< " regain "
		<< amount
		<< " hitPoints!"
		<< RESET
		<< std::endl;
	hitPoints_ += amount;
}
