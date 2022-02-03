#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"


class SpellBook{

    public:
        SpellBook(void){}
        SpellBook(const SpellBook& s){ *this = s; }
        SpellBook& operator=(const SpellBook& s){
            _v = s._v;
            return (*this);
        }
        ~SpellBook(void){

            std::vector<ASpell *>::iterator it = _v.begin();
            std::vector<ASpell *>::iterator ite = _v.end();
            while (it != ite){
                delete *it;
                ++it;
            }
            _v.clear();
        }

        void learnSpell(ASpell* a){

            std::vector<ASpell *>::iterator it = _v.begin();
            std::vector<ASpell *>::iterator ite = _v.end();
            while (a){
                while (it != ite){
                    if ((*it)->getName() == a->getName())
                        return ;
                    ++it;
                }
                _v.push_back(a->clone());
            }
        }

        void forgetSpell(std::string const &n){

            std::vector<ASpell *>::iterator it = _v.begin();
            std::vector<ASpell *>::iterator ite = _v.end();
            while (it != ite){
                if ((*it)->getName() == n){
                    delete *it;
                    _v.erase(it);
                    return ;
                }
                ++it;
            }
        }

        ASpell* createSpell(std::string const &n){

            std::vector<ASpell *>::iterator it = _v.begin();
            std::vector<ASpell *>::iterator ite = _v.end();
            while (it != ite){
                if ((*it)->getName() == n)
                    return (*it);
                ++it;
            }
            return (NULL);
        }

    private:
        std::vector<ASpell *> _v;

};

#endif