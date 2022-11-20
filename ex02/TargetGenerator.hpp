#pragma once

#include <iostream>
#include <map>

#include "ATarget.hpp"

class TargetGenerator
{
    //COPLIEN
    public:
    ~TargetGenerator();
    TargetGenerator();
    private:
    TargetGenerator(const TargetGenerator& copy);
    TargetGenerator& operator= (const TargetGenerator& assignment);

    //ACCESSORS
    public:

    //UNIQUE
    public:

    void learnTargetType(ATarget *target_to_learn);
    void forgetTargetType(const std::string& target_to_forget);
    ATarget* createTarget(const std::string& target_to_create);

    private:
    std::map<std::string, ATarget*> known_targets;
};