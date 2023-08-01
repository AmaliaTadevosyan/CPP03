#include "FragTrap.hpp"

int main() {
    FragTrap fragTrap("fraggy");

    fragTrap.attack("Enemy");
    fragTrap.takeDamage(5);
    fragTrap.beRepaired(3);
    fragTrap.highFivesGuyas();
    fragTrap.attack("Enemy");
    fragTrap.attack("Enemy");
    fragTrap.attack("Enemy");
    fragTrap.takeDamage(15);
    fragTrap.beRepaired(10);
    fragTrap.attack("Enemy");

    return 0;
}