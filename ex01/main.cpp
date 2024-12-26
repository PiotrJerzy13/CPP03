#include "ScavTrap.hpp"

int main() 
{
    ScavTrap scav1("Guardian");
    ScavTrap scav2("Protector");

    scav1.attack("Enemy1");
    scav2.guardGate();

    scav1.takeDamage(30);
    scav1.beRepaired(20);

    return 0;
}
