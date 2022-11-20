#include "Fwoosh.hpp"

Fwoosh::~Fwoosh(void)
{
    return;
}

Fwoosh::Fwoosh(void) :
ASpell::ASpell("Fwoosh", "fwooshed")
{
    return;
}

Fwoosh::Fwoosh(const Fwoosh& copy) :
ASpell::ASpell(copy)
{
    return;
}

Fwoosh* Fwoosh::clone() const
{
    return (new Fwoosh(*this));
}
