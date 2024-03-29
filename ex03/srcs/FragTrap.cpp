# include "FragTrap.hpp"

// default constructor
FragTrap::FragTrap() :
	ClapTrap("unamed", 100, 100, 30)
{
	std::cout << YELLOW1 << "calling FragTrap constructor" << RESET << std::endl;
}

// constructor
FragTrap::FragTrap(std::string name) :
	ClapTrap(name, 100, 100, 30)
{
	std::cout << YELLOW1 << "calling FragTrap constructor" << RESET << std::endl;
}

// destructor
FragTrap::~FragTrap()
{
	std::cout << YELLOW1 << "calling FragTrap destructor" <<  RESET << std::endl;
}

// copy constructor
FragTrap::FragTrap(FragTrap const& ori) :
	ClapTrap(ori)
{
	std::cout << YELLOW1 << "calling FragTrap copy constructor" << RESET << std::endl;
}

// OPERATOR OVERLOADS ------------------------------------------

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << YELLOW1 << "calling FragTrap copy assignement operator" << RESET << std::endl;

	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}

std::ostream&	operator<<(std::ostream& o, FragTrap const& rhs)
{
	rhs.printAttributes(o);
	return (o);
}

// MEMBER FUNCTIONS ------------------------------------------------------------------
void FragTrap::highFivesGuys(void)
{
	std::cout << SANDYBROWN << "Virtual high five! Ready? HIIIGH..." << std::endl;
	std::string answer;
	std::getline(std::cin, answer);
	exit_if_EOF_detected();
	if (answer != "yes")
		std::cout << "Well... Maybe next time..." << RESET << std::endl;
	else
		std::cout << "FIIIVE!" << RESET << std::endl;
}

void	FragTrap::printAttributes(std::ostream& o) const
{
	o << STEELBLUE1
		<< "FragTrap printing operator overload called ---->"
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
// FUNCTIONS ---------------------------------------------------------------------------

void	exit_if_EOF_detected()
{
	if (!std::cin)
	{
		std::cout << "failure\n";
		exit(-1);
	}
}
