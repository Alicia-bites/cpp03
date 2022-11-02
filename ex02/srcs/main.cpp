#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	a;
	std::cout << a << std::endl;
	std::cout << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	ScavTrap	b("Alicia");
	std::cout << b << std::endl;
	std::cout << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	FragTrap	c;
	std::cout << c << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	FragTrap	d("Rory");
	std::cout << d << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << INDIANRED1
		<< "Testing copy assignement operator..."
		<< RESET << std::endl;
	c = d;
	std::cout << c << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	// d.attack("Ernest");
	// while (d.getEnergyPoints() > 0)
	// 	d.attack("Ernest");
	// d.beRepaired(3);
	// d.attack("Ernest");
	// d.highFivesGuys();
	return 0;
}