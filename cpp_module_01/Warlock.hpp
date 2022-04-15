#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock{

	private:
		std::string _name;
		std::string _title;
		std::vector<ASpell*> tab;

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
			tab.clear();
		}
		std::string const& getName(void) const{ return _name; }
		std::string const& getTitle(void) const{ return _title; }
		void setTitle(std::string const& t){ _title = t; }
		void introduce() const{
			std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
		}

		void learnSpell(ASpell* a){

			std::vector<ASpell*>::iterator it = tab.begin();
			std::vector<ASpell*>::iterator ite = tab.end();
			if (a){
				while (it != ite){
					if ((*it)->getName() == a->getName())
						return;
					++it;
				}
				tab.push_back(a->clone());
			}
		}
		void forgetSpell(std::string name){

			std::vector<ASpell*>::iterator it = tab.begin();
			std::vector<ASpell*>::iterator ite = tab.end();
			while (it != ite){
				if ((*it)->getName() == name){
					tab.erase(it);
					return ;
				}
				++it;
			}
		}
		void launchSpell(std::string name, const ATarget& target){

		std::vector<ASpell*>::iterator it = tab.begin();
		std::vector<ASpell*>::iterator ite = tab.end();
		while (it != ite){
			if ((*it)->getName() == name){
				(*it)->launch(target);
				return ;
			}
			++it;
		}
	}

};

#endif