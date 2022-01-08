#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ATarget{

    private:
        std::string type;

    public:
        ATarget(std::string t): type(t){}
        const std::string &getType(void)const{
            return (this->type);
        }
        virtual ATarget* clone(void) = 0;
        void getHitBySpell(const ASpell& x){
            std::cout << type << " has been " << x.getEffects() << std::endl;
        }
        
};

#endif