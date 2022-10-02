#include "ScavTrap.hpp"
int main()
{
    ScavTrap scav("Gruz");
    scav.attack("ana");
    scav.attack("ana");
    scav.attack("ana");
    scav.attack("ana");
    scav.attack("ana");
    scav.attack("ana");
    std::cout << scav.getHitPoints() << std::endl;
    scav.beRepaired(15);
    scav.attack("ana");
    scav.beRepaired(5);
    scav.attack("ana");
    scav.attack("ana");
}