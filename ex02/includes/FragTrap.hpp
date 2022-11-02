#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <cstdlib>

# define SANDYBROWN "\033[38;5;215m"
# define YELLOW1 "\033[38;5;226m"

class FragTrap : public virtual ClapTrap
{
	private :

	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& ori);
		~FragTrap();
		
		FragTrap& operator=(const FragTrap& rhs);

		void	printAttributes(std::ostream& o) const;
		void 	highFivesGuys(void);
};

std::ostream&	operator<<(std::ostream& o, FragTrap const& rhs);
void			exit_if_EOF_detected();

#endif