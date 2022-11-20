#pragma once

#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook
{
    //COPLIEN
    public:
    ~SpellBook();
    SpellBook();
    private:
    SpellBook(const SpellBook& copy);
    SpellBook& operator= (const SpellBook& assignment);

    //ACCESSORS
    public:

    //UNIQUE
    public:

    void learnSpell(ASpell *spell_to_learn);
    void forgetSpell(const std::string& spell_to_forget);
    ASpell* createSpell(const std::string& spell_to_create);

    private:
    std::map<std::string, ASpell*> known_spells;
};