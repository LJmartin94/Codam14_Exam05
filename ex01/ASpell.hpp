#pragma once

#include <iostream>

class ATarget;

class ASpell
{
    //COPLIEN
    public:
    ASpell(const std::string& name, const std::string& effects);
    ~ASpell();
    // private:
    ASpell();
    ASpell(const ASpell& copy);
    // ASpell& operator= (const ASpell& assignment);

    //ACCESSORS
    public:
    const std::string& getName(void) const;
    const std::string& getEffects(void) const;

    //UNIQUE
    virtual ASpell* clone() const = 0;
    void launch(const ATarget& victim) const;

    protected:
    std::string name;
    std::string effects;
};