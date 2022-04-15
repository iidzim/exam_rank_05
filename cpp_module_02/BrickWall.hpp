#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget{

    public:
        BrickWall(void) : ATarget("Inconspicuous Red-brick Wall"){}
        ~BrickWall(void){}
        virtual ATarget* clone(void) const {
            return (new BrickWall());
        }
};

#endif