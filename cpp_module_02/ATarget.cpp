#include "ATarget.hpp"

void ATarget::getHitBySpell(const ASpell& as) const {

    std::cout << type << " has been " << as.getEffects() << "!\n";
}