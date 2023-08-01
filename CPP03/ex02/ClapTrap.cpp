#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energypoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << "is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitpoints = other._hitpoints;
        this->_energypoints = other._energypoints;
        this->_attackDamage = other._attackDamage;
        return *this;
    }
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void    ClapTrap::attack(std::string const &target)
{
    if (_energypoints <= 0)
    {
        std::cout << "CLapTrap " << _name << " has no eneergy!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << " causing" << _attackDamage << " points of damage!" << std::endl;
    _energypoints -= 1;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints <= amount)
    {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
    _hitpoints = amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energypoints <= amount)
    {
        std::cout << "ClapTrap " << _name << " has no energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " repairs " << amount << " hitpoints" << std::endl;
    _energypoints -= 1;
    _hitpoints += amount;
}