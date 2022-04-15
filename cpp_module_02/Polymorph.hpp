#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell{

    public:
        Polymorph(): ASpell("Polymorph", "turned into critter"){}
        ~Polymorph(void){}
        virtual ASpell* clone(void) const{
            return (new Polymorph());
        }
};

#endif