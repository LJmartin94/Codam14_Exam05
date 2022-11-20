#include "ASpell.hpp"

ASpell::ASpell(const std::string& name, const std::string& effects) :
name(name),
effects(effects)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
    return;
}

ASpell::~ASpell(void)
{
    std::cout << this->name << ": My job here is done!" << std::endl;
    return;
}

ASpell::ASpell(void) :
name("Nameless"),
effects("Effectsless")
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
    return;
}

ASpell::ASpell(const ASpell& copy) :
name(copy.name),
effects(copy.effects)
{
    return;
}

const std::string& ASpell::getName(void) const
{
    return(this->name);
}

const std::string& ASpell::getEffects(void) const
{
    return(this->effects);
}
