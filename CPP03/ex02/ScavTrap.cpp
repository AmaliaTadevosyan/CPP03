#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackDamage = 20;

    std::cout << "ScavTrap parameter constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavRap &copy)
{
    *this = copy;
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitpoints = other._hitpoints;
        this->_energypoints = other._energypoints;
        this->_attackDamage = other._attackDamage;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor" << std::endl;
}

void ScavTrap::attack(std::string const& target)
{
    if (this->_energypoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no energy" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage <<  "points of damage" << std::endl;
    this->_energypoints -= 1;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is on Gate keeper mode" << std::endl;
}
