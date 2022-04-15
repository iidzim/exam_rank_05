#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include <string>

class ATarget;

class ASpell{

    protected:
        std::string _name;
        std::string _effects;

    public:
        ASpell(void);
        ASpell(std::string n, std::string ef): _name(n), _effects(ef){}
        ASpell(const ASpell &other){ *this = other; }
        virtual ~ASpell(void){}
        ASpell& operator=(const ASpell& other){
            _name = other._name;
            _effects = other._effects;
            return (*this);
        }

        std::string const &getName(void) const{ return _name; }
        std::string const &getEffects(void) const{ return _effects; }

        virtual ASpell* clone(void) const = 0;
        void launch(const ATarget& at)const ;

};

#include "ATarget.hpp"

#endif