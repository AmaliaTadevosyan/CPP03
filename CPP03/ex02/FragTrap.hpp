#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    private:

    public:
        FragTrap();
        FragTrap(const FragTrap &copy);
        FragTrap operator=(const FragTrap &other);
        FragTrap(std::string name);
        ~FragTrap();
        void    highFivesGuyas(void);
};

#endif