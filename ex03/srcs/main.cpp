#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	std::cout << TURQUOISE2 << "Testing that parents and grandparents classes still work..." << RESET << std::endl;
	ClapTrap clappy("Clappy");
	std::cout << clappy << std::endl;
	ScavTrap scavy ("scavy");
	std::cout << scavy << std::endl;
	FragTrap fraggy("fraggy");
	std::cout << fraggy << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << TURQUOISE2 << "Testing Diamond default constructor :" << RESET << std::endl;
	DiamondTrap a;
	std::cout << std::endl;
	std::cout << a << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << TURQUOISE2 << "Testing Diamond constructor :" << RESET << std::endl;
	DiamondTrap	alicia("Alicia");
	std::cout << alicia << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << TURQUOISE2 << "Testing copy assignement operator : " << RESET << std::endl;
	a = alicia;
	std::cout << "a = " << a << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << TURQUOISE2 << "Testing whoAmI function : " << RESET << std::endl;
	alicia.whoAmI();
	std::cout << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << TURQUOISE2 << "Testing takeDamage function : " << RESET << std::endl;
	alicia.takeDamage(3);
	std::cout << alicia << std::endl;
	alicia.takeDamage(1000);
	std::cout << alicia << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << TURQUOISE2 << "Testing beRepaired function : " << RESET << std::endl;
	alicia.beRepaired(3);
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << TURQUOISE2 << "Testing attack function : " << RESET << std::endl;
	std::cout << alicia << std::endl;
	// while (alicia.getEnergyPoints() > 0)
	// 	alicia.attack("MoulesFrites");
	// alicia.attack("MoulesFrites");
	// std::cout << alicia << std::endl;
	// alicia.beRepaired(100);
	// std::cout << "------------------------------------------------------" << std::endl;
	// std::cout << TURQUOISE2 << "Testing parents special functions : " << RESET << std::endl;
	// DiamondTrap diam("Diam");
	// std::cout << diam << std::endl;
	// diam.guardGate();
	// diam.highFivesGuys();
	return 0;
}