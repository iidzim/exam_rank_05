#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>

class ASpell{

    protected:
        std::string name;
        std::string effects;
    
    public:
        ASpell(std::string x, std::string y): name(x), effects(y){}
        std::string getName(void)const { return (this->name); }
        std::string getEffects(void)const { return (this->effects); }
        virtual ASpell *clone(void) = 0;

};

#endif