#include "SpellBook.hpp"

SpellBook::~SpellBook(void)
{
    return;
}

SpellBook::SpellBook(void)
{
    return;
}

SpellBook::SpellBook(const SpellBook& copy) :
known_spells(copy.known_spells)
{
    return;
}


void SpellBook::learnSpell(ASpell *spell_to_learn)
{
    if (spell_to_learn == NULL)
        return;
    this->known_spells[spell_to_learn->getName()] = spell_to_learn;
    return;
}

void SpellBook::forgetSpell(const std::string& spell_to_forget)
{
    if ((this->known_spells).count(spell_to_forget))
        delete this->known_spells[spell_to_forget];
    this->known_spells.erase(spell_to_forget);
    return;
}

void SpellBook::launchSpell(const std::string& spell_to_cast, const ATarget& victim)
{
    if ((this->known_spells).count(spell_to_cast))
        this->known_spells[spell_to_cast]->launch(victim);
    return;
}


