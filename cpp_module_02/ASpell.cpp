#include "ASpell.hpp"

void ASpell::launch(const ATarget& at) const{

    at.getHitBySpell(*this);
}
