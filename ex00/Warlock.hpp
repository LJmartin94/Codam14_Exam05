#pragma once

#include <iostream>

class Warlock
{
    //COPLIEN
    public:
    Warlock();
    Warlock(const std::string& name, const std::string& title);
    ~Warlock();
    private:
    Warlock(const Warlock& copy);
    Warlock& operator= (const Warlock& assignment);

    //ACCESSORS
    public:
    const std::string& getName(void) const;
    const std::string& getTitle(void) const;

    void setTitle(const std::string& title_to_set);

    private:
    std::string name;
    std::string title;
};