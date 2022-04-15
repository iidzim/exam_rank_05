#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <string>

class ASpell;

class ATarget{

    private:
        std::string type;
    public:
        ATarget(void);
        ATarget(std::string t): type(t){}
        ATarget(const ATarget& other){ *this = other; }
        virtual ~ATarget(void){}
        ATarget& operator=(const ATarget& other){
            type = other.type;
            return (*this);
        }

        std::string const& getType(void) const { return type; }
        virtual ATarget* clone(void) const = 0;
        void getHitBySpell(const ASpell& as) const;


};

#include "ASpell.hpp"

#endif