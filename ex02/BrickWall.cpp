#include "BrickWall.hpp"

BrickWall::~BrickWall(void)
{
    return;
}

BrickWall::BrickWall(void) :
ATarget::ATarget("Inconspicuous Red-brick Wall")
{
    return;
}

BrickWall::BrickWall(const BrickWall& copy) :
ATarget::ATarget(copy)
{
    return;
}

BrickWall* BrickWall::clone() const
{
    return (new BrickWall(*this));
}
