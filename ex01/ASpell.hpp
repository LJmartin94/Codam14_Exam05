#pragma once

#include <iostream>

class ASpell
{
    //COPLIEN
    public:
    ASpell(const std::string& name, const std::string& effects);
    ~ASpell();
    private:
    ASpell();
    ASpell(const ASpell& copy);
    // ASpell& operator= (const ASpell& assignment);

    //ACCESSORS
    public:
    const std::string& getName(void) const;
    const std::string& getEffects(void) const;

    //UNIQUE
    virtual ASpell* clone() const = 0;

    protected:
    std::string name;
    std::string effects;
};