#pragma once

#include <iostream>
#include "ATarget.hpp"

class BrickWall : public ATarget
{
    //COPLIEN
    public:
    virtual ~BrickWall();
    // private:
    BrickWall();
    BrickWall(const BrickWall& copy);

    //UNIQUE
    virtual BrickWall* clone() const;
};