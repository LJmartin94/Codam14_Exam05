#include "ATarget.hpp"

ATarget::ATarget(const std::string& type) :
type(type)
{
    return;
}

ATarget::~ATarget(void)
{
    return;
}

ATarget::ATarget(void) :
type("typeless")
{
    return;
}

ATarget::ATarget(const ATarget& copy) :
type(copy.type)
{
    return;
}

const std::string& ATarget::getType(void) const
{
    return(this->type);
}
