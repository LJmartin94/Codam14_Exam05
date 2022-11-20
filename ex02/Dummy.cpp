#include "Dummy.hpp"

Dummy::~Dummy(void)
{
    return;
}

Dummy::Dummy(void) :
ATarget::ATarget("Target Practice Dummy")
{
    return;
}

Dummy::Dummy(const Dummy& copy) :
ATarget::ATarget(copy)
{
    return;
}

Dummy* Dummy::clone() const
{
    return (new Dummy(*this));
}
