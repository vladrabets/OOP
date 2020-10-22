#include <string.h>
using namespace std;

class Pet {
protected:
	string species;
	string name;
	double weight;
public:
	Pet();
	Pet(string name, double weight) { this->name = name; this->weight = weight; };
	void printName();
	void printSpecies();
	void setName(string s);
	void setWeight(double w);
	double getWeight();
	virtual void voice() = 0;
};

class Dog : public Pet {
public:
	Dog(string name, double weight) :Pet(name, weight) { this->species = "Dog"; };
	void voice();
};

class Cat : public Pet {
public:
	Cat(string name, double weight) :Pet(name, weight) { this->species = "Cat"; };
	void voice();
};

class Parrot : public Pet {
public:
	Parrot(string name, double weight) :Pet(name, weight) { this->species = "Parrot"; };
	void voice();
};