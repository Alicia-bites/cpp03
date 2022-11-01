#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>


# define SKYBLUE1 "\033[38;5;117m"
# define SKYBLUE2 "\033[38;5;111m"
# define SKYBLUE3 "\033[38;5;74m"
# define SLATEBLUE1 "\033[38;5;99m"
# define SLATEBLUE2 "\033[38;5;61m"
# define SLATEBLUE3 "\033[38;5;62m"
# define SPRINGGREEN1 "\033[38;5;48m"
# define SPRINGGREEN2 "\033[38;5;42m"
# define SPRINGGREEN3 "\033[38;5;47m"
# define SPRINGGREEN4 "\033[38;5;35m"
# define SPRINGGREEN5 "\033[38;5;41m"
# define SPRINGGREEN6 "\033[38;5;29m"
# define STEELBLUE1 "\033[38;5;67m"
# define STEELBLUE2 "\033[38;5;75m"
# define STEELBLUE3 "\033[38;5;81m"
# define STEELBLUE4 "\033[38;5;68m"
# define ORANGERED1 "\033[38;5;202m"
# define DEEPPINK1 "\033[38;5;198m"
# define DARKOLIVEGREEN3 "\033[38;5;155m"
# define INDIANRED1 "\033[38;5;131m"
# define RESET "\033[0m"

# define NO_ENERGY -42
# define INVALID_ARG -43

class ClapTrap
{
	protected :
		std::string		name_;
		unsigned int	hitPoints_;
		unsigned int	energyPoints_;
		unsigned int	attackDamage_;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, unsigned int hitPoints_, unsigned int energyPoints_, unsigned int attackDamage_);
		ClapTrap(const ClapTrap& ori);
		~ClapTrap();

		ClapTrap		&operator=(const ClapTrap& rhs);

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		
		void			setName(std::string& name);

		std::string		&getName(); 
		unsigned int	getHitPoints() const; 
		unsigned int	getEnergyPoints() const; 
		unsigned int	getAttackDamage() const; 

		void			printAttributes(std::ostream& o) const;

};

void	displayMsg(int msg);
std::ostream &operator<<(std::ostream& o, ClapTrap& rhs);


#endif