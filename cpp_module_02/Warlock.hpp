#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock{

    private:
        std::string name;
        std::string title;
        SpellBook book;

        Warlock(void){}
        Warlock(const Warlock& other){ *this = other; }
        Warlock& operator=(const Warlock& other);

    public:
        Warlock(std::string n, std::string t): name(n), title(t){
            std::cout << name << ": This looks like another boring day.\n";
        }
        ~Warlock(void){
            std::cout << name << ": My job here is done!\n";
        }

        std::string const& getName(void) const { return name; }
        std::string const& getTitle(void) const { return title; }
        void setTitle(std::string const& t){ title = t; }

        void introduce() const{
            std::cout << name << ": I am " << name << ", " << title << "!\n";
        }

        void learnSpell(ASpell* as) {

            book.learnSpell(as);
        }

        void forgetSpell(std::string name){

            book.forgetSpell(name);
        }

        void launchSpell(std::string name, const ATarget& at){

            ASpell *tmp = book.createSpell(name);
            if (tmp)
                tmp->launch(at);
        }
};

#endif