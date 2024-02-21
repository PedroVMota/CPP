#include <iostream>
#include <string>

class FragTrap
{
private:
    std::string _name;
    int _energyPoints;
    int _attackDamage;
    int _hitPoints;

public:
    FragTrap();
    FragTrap(std::string n);

    void attack(const std::string &target);
    void takeDamage(unsigned int amout);
    void beRepaired(unsigned int amout);

    void hightFivesGuys();
    

    std::string getName() const;
    int getEnery() const;
    int getAttack() const;
    int getHitpoints() const;
    ~FragTrap();
};
