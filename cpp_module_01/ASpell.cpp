#include "ASpell.hpp"

void ASpell::launch(ATarget const &at) const {
    at.getHitBySpell(*this);
}
