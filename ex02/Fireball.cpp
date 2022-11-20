#include "Fireball.hpp"

Fireball::~Fireball(void)
{
    return;
}

Fireball::Fireball(void) :
ASpell::ASpell("Fireball", "burnt to a crisp")
{
    return;
}

Fireball::Fireball(const Fireball& copy) :
ASpell::ASpell(copy)
{
    return;
}

Fireball* Fireball::clone() const
{
    return (new Fireball(*this));
}
