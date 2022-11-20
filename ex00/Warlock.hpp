#pragma once

#include <iostream>

class Warlock
{
    //COPLIEN
    public:
    Warlock(const std::string& name, const std::string& title);
    ~Warlock();
    private:
    Warlock();
    Warlock(const Warlock& copy);
    // Warlock& operator= (const Warlock& assignment);

    //ACCESSORS
    public:
    const std::string& getName(void) const;
    const std::string& getTitle(void) const;

    void setTitle(const std::string& title_to_set);

    //UNIQUE
    void introduce() const;

    private:
    std::string name;
    std::string title;
};