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
    this->known_spells[spell_to_learn->getName()] = spell_to_learn->clone();
    return;
}

void SpellBook::forgetSpell(const std::string& spell_to_forget)
{
    if ((this->known_spells).count(spell_to_forget))
        delete this->known_spells[spell_to_forget];
    this->known_spells.erase(spell_to_forget);
    return;
}

ASpell* SpellBook::createSpell(const std::string& spell_to_create)
{
    if ((this->known_spells).count(spell_to_create))
        return(this->known_spells[spell_to_create]);
    return NULL;
}


