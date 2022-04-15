#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include <string>

class ATarget;

class ASpell{

    protected:
        std::string name;
        std::string effects;

    public:
        ASpell(void){}
        ASpell(std::string n, std::string ef): name(n), effects(ef) {}
        ASpell(const ASpell& other) { *this = other; }
        ASpell& operator=(const ASpell& other){
            name = other.name;
            effects = other.effects;
            return (*this);
        }
        virtual ~ASpell(void){}

        std::string getName(void) const { return name; }
        std::string getEffects(void) const { return effects; }
        virtual ASpell* clone(void) const = 0;
        void launch(const ATarget& at) const;
};

#include "ATarget.hpp"

#endif