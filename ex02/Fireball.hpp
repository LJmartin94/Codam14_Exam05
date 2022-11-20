#pragma once

#include <iostream>
#include "ASpell.hpp"

class Fireball : public ASpell
{
    //COPLIEN
    public:
    ~Fireball();
    // private:
    Fireball();
    Fireball(const Fireball& copy);

    //UNIQUE
    virtual Fireball* clone() const;
};