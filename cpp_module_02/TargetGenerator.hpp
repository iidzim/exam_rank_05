#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include <vector>

class TargetGenerator{
    
    private:
        std::vector<ATarget *> tab;

    public:

        TargetGenerator(void){}
        TargetGenerator(const TargetGenerator& t){ *this = t; }
        TargetGenerator& operator=(const TargetGenerator& t){
            tab = t.tab;
            return (*this);
        }
        ~TargetGenerator(void){
            std::vector<ATarget *>::iterator it = tab.begin();
            std::vector<ATarget *>::iterator ite = tab.end();
            while (it != ite){
                delete *it;
                ++it;
            }
            tab.clear();
        }

        void learnTargetType(ATarget* a){
            std::vector<ATarget *>::iterator it = tab.begin();
            std::vector<ATarget *>::iterator ite = tab.end();
            while (a){
                while (it != ite){
                    if ((*it)->getType() == a->getType())
                        return ;
                    ++it;
                }
                tab.push_back(a->clone());
            }
        }

        void forgetTargetType(std::string const &ty){
            std::vector<ATarget *>::iterator it = tab.begin();
            std::vector<ATarget *>::iterator ite = tab.end();
            while (it != ite){
                if ((*it)->getType() == ty){
                    delete *it;
                    tab.erase(it);
                    return ;
                }
                ++it;
            }
        }

        ATarget* createTarget(std::string const &ty){
            std::vector<ATarget *>::iterator it = tab.begin();
            std::vector<ATarget *>::iterator ite = tab.end();
            while (it != ite){
                if ((*it)->getType() == ty)
                    return (*it);
                ++it;
            }
            return (NULL);
        }
    
};

#endif