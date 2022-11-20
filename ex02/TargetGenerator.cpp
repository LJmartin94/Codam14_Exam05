#include "TargetGenerator.hpp"

TargetGenerator::~TargetGenerator(void)
{
    return;
}

TargetGenerator::TargetGenerator(void)
{
    return;
}

TargetGenerator::TargetGenerator(const TargetGenerator& copy) :
known_targets(copy.known_targets)
{
    return;
}


void TargetGenerator::learnTargetType(ATarget *target_to_learn)
{
    if (target_to_learn == NULL)
        return;
    this->known_targets[target_to_learn->getType()] = target_to_learn->clone();
    return;
}

void TargetGenerator::forgetTargetType(const std::string& target_to_forget)
{
    if ((this->known_targets).count(target_to_forget))
        delete this->known_targets[target_to_forget];
    this->known_targets.erase(target_to_forget);
    return;
}

ATarget* TargetGenerator::createTarget(const std::string& target_to_create)
{
    if ((this->known_targets).count(target_to_create))
        return(this->known_targets[target_to_create]);
    return NULL;
}


