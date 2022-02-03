#ifndef DUMMY_HPP
# define DUMMY_HPP

#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget{

    public:
        Dummy(void): ATarget("Target Practice Dummy"){}
        ~Dummy(){}
        virtual ATarget* clone(void)const ;
};

#endif
