#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"

class Dummy : public ATarget{

    public:
        Dummy(void) : ATarget("Target Practice Dummy"){}
        ~Dummy(void){}
        virtual ATarget* clone(void) const {
            return (new Dummy());
        }
};

#endif