#ifndef WARLOCK_HPP
# define WARLOCK_HPP 

#include <iostream>

class Warlock{

    private:
        std::string name;
        std::string title;

    public:
        Warlock(std::string x, std::string y): name(x), title(y){
            std::cout << name << ": This looks like another boring day." << std::endl;
        }

        ~Warlock(){
            std::cout << name << ": My job here is done!" << std::endl;
        }

        std::string const &getName(void) const {
            return (this->name);
        }

        std::string const &getTitle(void) const {
            return (this->title);
        }

        void setTitle(const std::string &x){
            this->title = x;
        }

        void introduce() const{
            std::cout << name << ": I am " << name << ", " << title << "!\n";
        }
};

#endif