#ifndef ATARGET_HPP
#define ATARGET_HPP

#include<iostream>
#include<string>

class ASpell;

class ATarget{

    protected:
        std::string _type;

    public:
        ATarget(void);
        ATarget(std::string t): _type(t){}
        ATarget(const ATarget& other){ *this = other; }
        ATarget& operator=(const ATarget& other){
            _type = other._type;
            return(*this);
        }
        virtual ~ATarget(void){}
        
        std::string const& getType(void) const{ return _type; }

        virtual ATarget* clone(void)const = 0;

        void getHitBySpell(const ASpell& as)const ;

};

#include "ASpell.hpp"

#endif