#include "Dummy.hpp"

ATarget* Dummy::clone(void)const {
    return (new Dummy());
}