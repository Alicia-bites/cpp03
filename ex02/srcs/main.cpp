#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	a;
	std::cout << a << std::endl;
	std::cout << std::endl;

	ScavTrap	b("Alicia");
	std::cout << b << std::endl;
	std::cout << std::endl;

	FragTrap	c;
	std::cout << c << std::endl;

	FragTrap	d("Rory");
	std::cout << d << std::endl;

	d.highFivesGuys();
	d.attack("Ernest");
	while (d.getEnergyPoints() > 0)
		d.attack("Ernest");
	d.beRepaired(3);
	d.attack("Ernest");
	
	return 0;
}