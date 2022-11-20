#pragma once

#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
    //COPLIEN
    public:
    Warlock(const std::string& name, const std::string& title);
    ~Warlock();
    private:
    Warlock();
    Warlock(const Warlock& copy);
    // Warlock& operator= (const Warlock& assignment);

    //ACCESSORS
    public:
    const std::string& getName(void) const;
    const std::string& getTitle(void) const;

    void setTitle(const std::string& title_to_set);

    //UNIQUE
    void introduce() const;

    void learnSpell(ASpell *spell_to_learn);
    void forgetSpell(const std::string& spell_to_forget);
    void launchSpell(const std::string& spell_to_cast, const ATarget& victim);

    private:
    std::string name;
    std::string title;
    std::map<std::string, ASpell*> known_spells;
};