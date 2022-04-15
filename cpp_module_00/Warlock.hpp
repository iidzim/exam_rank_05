#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>

class Warlock{

	private:
		std::string _name;
		std::string _title;

		Warlock(void);
		Warlock(const Warlock& other){ *this = other; }
		Warlock& operator=(const Warlock& other){

			_name = other._name;
			_title = other._title;
			return (*this);
		}

	public:

		Warlock(std::string n, std::string t): _name(n), _title(t){
			std::cout << _name << ": This looks like another boring day.\n";
		}
		~Warlock(void){
			std::cout << _name << ": My job here is done!\n";
		}
		std::string const& getName(void) const{
			return _name;
		}
		std::string const& getTitle(void) const{
			return _title;
		}
		void setTitle(std::string const& t){
			_title = t;
		}
		void introduce() const{
			std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
		}


};

#endif