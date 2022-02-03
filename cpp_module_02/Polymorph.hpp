#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

#include <iostream>
#include "ASpell.hpp"

class Polymorph: public ASpell{

    public:
        Polymorph(void): ASpell("Polymorph", "turned into critter") {}
        ~Polymorph(){}
        virtual ASpell* clone(void) const;

};

#endif