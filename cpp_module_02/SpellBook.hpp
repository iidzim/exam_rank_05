#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <vector>

class SpellBook{

    private:
        std::vector<ASpell*> arr;
    public:
        SpellBook(){}
        SpellBook(const SpellBook& other) { *this = other; }
        SpellBook& operator=(const SpellBook& other){
            arr = other.arr;
            return (*this);
        }
        ~SpellBook(){ arr.clear(); }

        void learnSpell(ASpell* as){

            std::vector<ASpell*>::iterator it = arr.begin();
            std::vector<ASpell*>::iterator ite = arr.end();
            if (as){
                while (it != ite){
                    if ((*it)->getName() == as->getName())
                        return ;
                    ++it;
                }
                arr.push_back(as->clone());
            }
        }

        void forgetSpell(std::string const &name){

            std::vector<ASpell*>::iterator it = arr.begin();
            std::vector<ASpell*>::iterator ite = arr.end();
            while (it != ite){
                if ((*it)->getName() == name){
                    arr.erase(it);
                    return ;
                }
                ++it;
            }
        }
        ASpell* createSpell(std::string const &name){

            std::vector<ASpell*>::iterator it = arr.begin();
            std::vector<ASpell*>::iterator ite = arr.end();
            while (it != ite){

                if ((*it)->getName() == name)
                    return (*it);
                ++it;
            }
            return (NULL);
        }

};

#endif