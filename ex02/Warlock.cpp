#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) :
name(name),
title(title)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
    return;
}

Warlock::~Warlock(void)
{
    std::cout << this->name << ": My job here is done!" << std::endl;
    return;
}

Warlock::Warlock(void) :
name("Nameless"),
title("Titleless")
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
    return;
}

Warlock::Warlock(const Warlock& copy) :
name(copy.name),
title(copy.title)
{
    return;
}

const std::string& Warlock::getName(void) const
{
    return(this->name);
}

const std::string& Warlock::getTitle(void) const
{
    return(this->title);
}

void Warlock::setTitle(const std::string& title_to_set)
{
    this->title = title_to_set;
    return;
}

void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl; 
    return;
}

void Warlock::learnSpell(ASpell *spell_to_learn)
{
    if (spell_to_learn == NULL)
        return;
    this->m_book.learnSpell(spell_to_learn);
    return;
}

void Warlock::forgetSpell(const std::string& spell_to_forget)
{
    this->m_book.forgetSpell(spell_to_forget);
    return;
}

void Warlock::launchSpell(const std::string& spell_to_cast, const ATarget& victim)
{
    ASpell *cast = this->m_book.createSpell(spell_to_cast);
    if (cast != NULL)
        cast->launch(victim);
    return;
}


