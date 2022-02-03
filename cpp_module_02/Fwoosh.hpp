#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include <iostream>
#include "ASpell.hpp"

class Fwoosh: public ASpell{

    public:
        Fwoosh(void): ASpell("Fwoosh", "fwooshed") {}
        ~Fwoosh(){}
        virtual ASpell* clone(void) const;

};

#endif
