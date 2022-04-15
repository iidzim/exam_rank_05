#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include <vector>

class TargetGenerator{

    private:
        std::vector<ATarget*> tab;
    public:
        TargetGenerator(){}
        TargetGenerator(const TargetGenerator& tg){ *this = tg; }
        TargetGenerator& operator=(const TargetGenerator& tg){
            tab = tg.tab;
            return (*this);
        }
        ~TargetGenerator(){ tab.clear(); }

        void learnTargetType(ATarget* at){

            std::vector<ATarget*>::iterator it = tab.begin();
            std::vector<ATarget*>::iterator ite = tab.end();
            if (at){
                while (it != ite){
                    if ((*it)->getType() == at->getType())
                        return ;
                    ++it;
                }
                tab.push_back(at->clone());
            }
        }

        void forgetTargetType(std::string const &type){

            std::vector<ATarget*>::iterator it = tab.begin();
            std::vector<ATarget*>::iterator ite = tab.end();
            while (it != ite){
                if ((*it)->getType() == type){
                    tab.erase(it);
                    return ;
                }
                ++it;
            }
        }

        ATarget* createTarget(std::string const &type){

            std::vector<ATarget*>::iterator it = tab.begin();
            std::vector<ATarget*>::iterator ite = tab.end();
            while(it != ite){
                if ((*it)->getType() == type)
                    return (*it);
                ++it;
            }
            return (NULL);
        }

};

#endif