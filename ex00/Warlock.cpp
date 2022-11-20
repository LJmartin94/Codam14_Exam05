#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) :
name(name),
title(title)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
    return;
}

Warlock::~Warlock(void)
{
    std::cout << this->name << ": My job here is done!" << std::endl;
    return;
}

Warlock::Warlock(void) :
name("Nameless"),
title("Titleless")
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
    return;
}

Warlock::Warlock(const Warlock& copy) :
name(copy.name),
title(copy.title)
{
    return;
}

const std::string& Warlock::getName(void) const
{
    return(this->name);
}

const std::string& Warlock::getTitle(void) const
{
    return(this->title);
}

void Warlock::setTitle(const std::string& title_to_set)
{
    this->title = title_to_set;
    return;
}

void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl; 
    return;
}

