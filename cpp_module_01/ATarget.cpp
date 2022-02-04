#include "ATarget.hpp"

void ATarget::getHitBySpell(const ASpell& as) const {
    std::cout << _type << " has been " << as.getEffects() << " !\n";
}
