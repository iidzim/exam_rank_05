#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>

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

    private:
        std::string _name;
        std::string _title;

};

#endif