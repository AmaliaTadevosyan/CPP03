#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private:

    public:
        ScavTrap();
        ScavTrap(const ScavTrap &copy);
        ScavTrap operator=(const ScavTrap &other);
        ScavTrap(std::string name);
        ~ScavTrap();
        void    guardGate();
        void    attack(std::string const &target);
};

#endif