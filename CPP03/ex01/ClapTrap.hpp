#ifndef CLAPTRAP_CPP
#define CLAPTRAP_CPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string  _name;
        unsigned int _hitpoints;
        unsigned int _energypoints;
        unsigned int _attackDamage;
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ClapTrap& operator=(const ClapTrap &other);
        virtual ~ClapTrap(void);

        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        
};


#endif