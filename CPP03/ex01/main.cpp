#include "ScavTrap.hpp"

int main() {
    ScavTrap scavtrap("Scavvy");
    scavtrap.attack("Enemy");
    scavtrap.takeDamage(5);
    scavtrap.beRepaired(3);
    scavtrap.guardGate();
    scavtrap.attack("Enemy");
    scavtrap.attack("Enemy");
    scavtrap.attack("Enemy");
    scavtrap.takeDamage(15);
    scavtrap.beRepaired(10);
    scavtrap.attack("Enemy");

    return 0;
}