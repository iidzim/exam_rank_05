#include "Polymorph.hpp"

ASpell* Polymorph::clone(void) const {
    return (new Polymorph());
}