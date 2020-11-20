#include <iostream>
#include <string.h>
#include "Pet.h"

using namespace std;

int main() {
	
	string n;

	int w;
	cout << "Input your dog's name:\n";
	cin >> n;
	cout << "Input your dog's weight:\n";
	cin >> w;
	Dog D(n, w);

	cout << "Input your cat's name:\n";
	cin >> n;
	cout << "Input your cat's weight:\n";
	cin >> w;
	Cat C(n, w);

	cout << "Input your parrot's name:\n";
	cin >> n;
	cout << "Input your parrot's weight:\n";
	cin >> w;
	Parrot P(n, w);
	
	/*
	cout << "Dog voice:\n";
	D.voice();
	cout << "Information about dog:\n";
	D.printSpecies(); cout << "\n";
	D.printName(); cout << "\n";
	cout << "Dog's weight: " << D.getWeight() << "\n\n";

	cout << "Cat voice:\n";
	C.voice();
	cout << "Information about cat:\n";
	C.printSpecies(); cout << "\n";
	C.printName(); cout << "\n";
	cout << "Cat's weight: " << C.getWeight() << "\n\n";

	cout << "Parrot voice:\n";
	P.voice();
	cout << "Information about parrot:\n";
	P.printSpecies(); cout << "\n";
	P.printName(); cout << "\n";
	cout << "Parrot's weight: " << P.getWeight() << "\n\n";
	*/

	cout << D;
	cin >> D;
	cout << D;

	return 0;
}
