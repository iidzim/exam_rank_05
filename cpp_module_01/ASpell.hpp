#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include <string>

class ATarget;

class ASpell{

    public:

        ASpell(void){}
        ASpell(std::string n, std::string e): _name(n), _effects(e) {}
        ASpell(const ASpell& as){ *this = as; }
        ASpell& operator=(const ASpell& as){
            _name = as._name;
            _effects = as._effects;
            return (*this);
        }
        ~ASpell(void){}
        std::string const &getName(void) const { return _name; }
        std::string const &getEffects(void) const { return _effects; }
        void launch(ATarget const &at) const;
        virtual ASpell* clone(void) const = 0;


    private:
        std::string _name;
        std::string _effects;

};

#include "ATarget.hpp"

#endif