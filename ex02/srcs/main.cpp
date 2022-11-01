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
	
	// std::cout << b << std::endl;
	// std::cout << "---------------------------------------" << std::endl;
	// b.takeDamage(3);
	// std::cout << b << std::endl;
	// std::cout << "---------------------------------------" << std::endl;

	// b.takeDamage(100);
	// std::cout << b << std::endl;
	// std::cout << "---------------------------------------" << std::endl;

	// b.beRepaired(3);
	// std::cout << b << std::endl;
	// std::cout << "---------------------------------------" << std::endl;

	// b.attack("Rory");
	// std::cout << b << std::endl;
	// std::cout << "---------------------------------------" << std::endl;

	// b.beRepaired(100);
	// std::cout << b << std::endl;
	// std::cout << "---------------------------------------" << std::endl;

	// b.guardGate();
	// b.guardGate();
	
	// for (int n = 0; n < 48; n++)
	// 	b.attack("Rory");
	// b.beRepaired(3);
	// b.guardGate();
	// return 0;
}