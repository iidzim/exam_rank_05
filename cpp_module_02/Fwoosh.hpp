#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell{

    public:
        Fwoosh(void): ASpell("Fwoosh", "Fwooshed") {}
        ~Fwoosh(void){}
        virtual ASpell* clone(void) const {
            return (new Fwoosh());
        }
};

#endif