#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int	main()
{
	ClapTrap	a;
	std::cout << a << std::endl;
	std::cout << std::endl;

	ScavTrap	b("Alicia");
	std::cout << b << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	b.takeDamage(3);
	std::cout << b << std::endl;
	std::cout << "---------------------------------------" << std::endl;

	b.takeDamage(100);
	std::cout << b << std::endl;
	std::cout << "---------------------------------------" << std::endl;

	b.beRepaired(3);
	std::cout << b << std::endl;
	std::cout << "---------------------------------------" << std::endl;

	b.attack("Rory");
	std::cout << b << std::endl;
	std::cout << "---------------------------------------" << std::endl;

	b.beRepaired(100);
	std::cout << b << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.attack("Rory");
	// b.beRepaired(3);
	return 0;
}