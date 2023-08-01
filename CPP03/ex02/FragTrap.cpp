#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FRagTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitpoints = 100;
    this->_energypoints = 100;
    this->_attackDamage = 30;

    std::cout << "FragTrap parameter constructor called" << std::endl; 
}

FragTrap::FragTrap(const FragTrap &copy)
{
    *this = copy;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FRagTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitpoints = other._hitpoints;
        this->_energypoints = other._energypoints;
        this->_attackDamage = other._attackDamage;
    }
    return (this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuyas()
{
    if (this->_energypoints <= 0)
    {
        std::cout << "FragTrap " << this->_name << "has no energy" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->_name << " high fives " << std::endl;
    this->_energypoints -= 1;
}
