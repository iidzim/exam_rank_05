#include "Fireball.hpp"

ASpell* Fireball::clone(void) const {
    return (new Fireball());
}