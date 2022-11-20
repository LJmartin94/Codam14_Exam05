#pragma once

#include <iostream>

class ASpell;

class ATarget
{
    //COPLIEN
    public:
    ATarget(const std::string& type);
    ~ATarget();
    // private:
    ATarget();
    ATarget(const ATarget& copy);
    // ATarget& operator= (const ATarget& assignment);

    //ACCESSORS
    public:
    const std::string& getType(void) const;

    //UNIQUE
    virtual ATarget* clone() const = 0;
    void getHitBySpell(const ASpell& spell) const;

    protected:
    std::string type;
};