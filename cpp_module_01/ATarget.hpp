#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include <string>

class ASpell;

class ATarget{

    public:

        ATarget(void){}
        ATarget(std::string t): _type(t){}
        ATarget(const ATarget &at){ *this = at; }
        ~ATarget(void){}
        ATarget& operator=(ATarget const &at){
            _type = at._type;
            return (*this);
        }
        const std::string& getType(void) const {return _type; }
        void getHitBySpell(const ASpell& as) const;
        virtual ATarget* clone(void) const = 0;

    private:
        std::string _type;

};

#include "ASpell.hpp"

#endif