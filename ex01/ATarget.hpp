#pragma once

#include <iostream>

class ATarget
{
    //COPLIEN
    public:
    ATarget(const std::string& type);
    ~ATarget();
    private:
    ATarget();
    ATarget(const ATarget& copy);
    // ATarget& operator= (const ATarget& assignment);

    //ACCESSORS
    public:
    const std::string& getType(void) const;

    //UNIQUE
    virtual ATarget* clone() const = 0;

    protected:
    std::string type;
};