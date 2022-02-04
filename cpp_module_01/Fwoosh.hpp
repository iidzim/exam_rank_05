#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include <iostream>
#include "ASpell.hpp"

class Fwoosh: public ASpell{

    public:
        Fwoosh(void): ASpell("Fwoosh", "fwooshed") {}
        ~Fwoosh(){}
        ASpell* clone(void) const{return (new Fwoosh());}

};

#endif
