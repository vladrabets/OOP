#include <iostream>
#include "Pet.h"
#include <string.h>

using namespace std;

void Pet::printName() {
	cout << this->name;
}

void Pet::printSpecies(){
	cout << this->species;
}

void Pet::setName(string s) {
	this->name = s;
}

void Pet::setWeight(double w){
	this->weight = w;
}

double Pet::getWeight() {
	return this->weight;
}

void Dog::voice() {
	cout << "Woof!\n";
}

void Cat::voice() {
	cout << "Meow!\n";
}

void Parrot::voice() {
	cout << "Scrrr!\n";
}


std::istream& operator>> (std::istream& in, Pet& pet) {

	printf("Input values:\n");
	in >> pet.name;
	in >> pet.weight;

	return in;
}

ostream& operator<< (ostream& out, const Pet& pet)
{
	// Поскольку operator<< является другом класса Point, то мы имеем прямой доступ к членам Point
	out << "Name: " << pet.name << "\nSpecies: " << pet.species << "\nWeight: " << pet.weight << "\n";

	return out;
}
