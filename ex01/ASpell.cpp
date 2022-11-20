#include "ASpell.hpp"

ASpell::ASpell(const std::string& name, const std::string& effects) :
name(name),
effects(effects)
{
    return;
}

ASpell::~ASpell(void)
{
    return;
}

ASpell::ASpell(void) :
name("Nameless"),
effects("Effectsless")
{
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
