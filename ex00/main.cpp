#include "ClapTrap.hpp"

int main() 
{
    ClapTrap clap1("Alpha");
    ClapTrap clap2("Beta");

    clap1.attack("Beta");
    clap2.takeDamage(0);
    clap2.beRepaired(3);

    clap1.attack("Beta");
    clap2.takeDamage(5);

    return 0;
}
