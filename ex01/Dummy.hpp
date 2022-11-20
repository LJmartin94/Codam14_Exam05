#pragma once

#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget
{
    //COPLIEN
    public:
    ~Dummy();
    // private:
    Dummy();
    Dummy(const Dummy& copy);

    //UNIQUE
    virtual Dummy* clone() const;
};