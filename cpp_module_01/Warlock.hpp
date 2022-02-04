#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <vector>

class Warlock{

    public:

        Warlock(std::string n, std::string t): _name(n), _title(t){
            std::cout << _name << ": This looks like another boring day.\n";
        }
        ~Warlock(void){
            std::cout << _name << ": My job here is done!\n";
        }
        const std::string& getName(void) const { return _name; }
        const std::string& getTitle(void) const { return _title; }
        void setTitle(const std::string& titre) { _title = titre; }
        void introduce() const{
            std::cout << _name << ": I am " << _name << ", " << _title << " !\n";
        }

        void learnSpell(ASpell* a){

            std::vector<ASpell *>::iterator it = this->t.begin();
            std::vector<ASpell *>::iterator ite = this->t.end();
            while (a){
                while (it != ite){
                    if ((*it)->getName() == a->getName())
                        return ;
                    ++it;
                }
                t.push_back(a->clone());
            }
        }

        void forgetSpell(std::string n){

            std::vector<ASpell *>::iterator it = this->t.begin();
            std::vector<ASpell *>::iterator ite = this->t.end();
            while (it != ite){
                if ((*it)->getName() == n){
                    // delete *it;
                    t.erase(it);
                }
                ++it;
            }
        }

        void launchSpell(std::string n, const ATarget& at){
            std::vector<ASpell *>::iterator it = this->t.begin();
            std::vector<ASpell *>::iterator ite = this->t.end();
            while (it != ite){
                if ((*it)->getName() == n){
                    (*it)->launch(at);
                    return ;
                }
                ++it;
            }
        }

    private:
        std::string _name;
        std::string _title;
        std::vector<ASpell *> t;

};

#endif