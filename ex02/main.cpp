#include "FragTrap.hpp"

int main() 
{
    FragTrap frag1("Fraggy");
    FragTrap frag2(frag1);

    frag1.attack("Target1");
    frag1.highFivesGuys();

    frag2 = frag1;
    frag2.highFivesGuys();

    return 0;
}
