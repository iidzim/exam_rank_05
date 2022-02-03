#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include <iostream>
#include "ASpell.hpp"

class Fireball: public ASpell{

    public:
        Fireball(void): ASpell("Fireball", "burnt to a crisp") {}
        ~Fireball(){}
        virtual ASpell* clone(void) const;

};

#endif