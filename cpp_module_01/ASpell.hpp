#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
class ATarget;

class ASpell{

    protected:
        std::string name;
        std::string effects;
    
    public:
        ASpell(std::string x, std::string y): name(x), effects(y){}
        std::string getName(void)const { return (this->name); }
        std::string getEffects(void)const { return (this->effects); }
        virtual ASpell *clone(void) = 0;
        void launch (const ATarget& x)const {
            x.getHitBySpell(*this);
        }
};

#include "ATarget.hpp"

#endif