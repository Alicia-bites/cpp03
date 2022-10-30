#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a;
	std::cout << a << std::endl;
	std::cout << std::endl;


	ClapTrap	b("");
	std::cout << b << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	b.takeDamage(3);
	std::cout << b << std::endl;
	std::cout << "---------------------------------------" << std::endl;

	b.takeDamage(20);
	std::cout << b << std::endl;
	std::cout << "---------------------------------------" << std::endl;

	b.beRepaired(3);
	std::cout << b << std::endl;
	std::cout << "---------------------------------------" << std::endl;

	b.attack("Olga");
	std::cout << b << std::endl;
	std::cout << "---------------------------------------" << std::endl;

	b.attack("Olga");
	std::cout << b << std::endl;
	std::cout << "---------------------------------------" << std::endl;

	b.beRepaired(6);
	std::cout << b << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	
	b.attack("Olga");
	std::cout << b << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	b.attack("Olga");
	b.attack("Olga");
	b.attack("Olga");
	b.attack("Olga");
	std::cout << b << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	b.attack("Olga");
	std::cout << b << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	b.attack("Olga");
	b.beRepaired(2);
	return 0;
}