#pragma once

#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
    //COPLIEN
    public:
    ~Fwoosh();
    // private:
    Fwoosh();
    Fwoosh(const Fwoosh& copy);

    //UNIQUE
    virtual Fwoosh* clone() const;
};