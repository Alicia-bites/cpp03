#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap	rory("Rory");
	ScavTrap	benny("Benny");
	FragTrap	a;
	DiamondTrap	alicia("Alicia");

	std::cout << a << std::endl;
	std::cout << rory << std::endl;
	std::cout << benny << std::endl;
	std::cout << alicia << std::endl;

	std::cout << "Testing whoAmI function : " << std::endl;
	alicia.whoAmI();
	std::cout << std::endl;
	alicia.takeDamage(3);
	std::cout << alicia << std::endl;
	alicia.takeDamage(20);
	std::cout << alicia << std::endl;
	alicia.beRepaired(3);
	std::cout << alicia << std::endl;
	alicia.attack("MoulesFrites");
	alicia.attack("MoulesFrites");
	std::cout << alicia << std::endl;
	alicia.attack("MoulesFrites");
	std::cout << alicia << std::endl;
	alicia.beRepaired(100);
	std::cout << alicia << std::endl;
	alicia.attack("MoulesFrites");
	return 0;
}