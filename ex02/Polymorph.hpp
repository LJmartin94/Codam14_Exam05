#pragma once

#include <iostream>
#include "ASpell.hpp"

class Polymorph : public ASpell
{
    //COPLIEN
    public:
    ~Polymorph();
    // private:
    Polymorph();
    Polymorph(const Polymorph& copy);

    //UNIQUE
    virtual Polymorph* clone() const;
};