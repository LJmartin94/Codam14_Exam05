#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(const std::string& type) :
type(type)
{
    return;
}

ATarget::~ATarget(void)
{
    return;
}

ATarget::ATarget(void) :
type("typeless")
{
    return;
}

ATarget::ATarget(const ATarget& copy) :
type(copy.type)
{
    return;
}

const std::string& ATarget::getType(void) const
{
    return(this->type);
}

void ATarget::getHitBySpell(const ASpell& spell) const
{
    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
    return;
}
