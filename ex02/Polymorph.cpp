#include "Polymorph.hpp"

Polymorph::~Polymorph(void)
{
    return;
}

Polymorph::Polymorph(void) :
ASpell::ASpell("Polymorph", "turned into a critter")
{
    return;
}

Polymorph::Polymorph(const Polymorph& copy) :
ASpell::ASpell(copy)
{
    return;
}

Polymorph* Polymorph::clone() const
{
    return (new Polymorph(*this));
}
