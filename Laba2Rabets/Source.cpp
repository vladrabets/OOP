#include <iostream>
#include "String.h"
#include <string.h>

using namespace std;

int main() {
	int n;
	
	cout << "Input number of strings: ";
	cin >> n;

	String* Str;
	Str = new String[n];
	int sw = 1;
	while (sw)
	{
		cout << "Choose any operation:" << endl
			<< "1 - Concatenation" << endl
			<< "2 - Extraction of symbol of the string" << endl
			<< "3 - Compairing strings" << endl
			<< "4 - Sorting by the first symbol" << endl
			<< "5 - Sorting by the lengths of strings" << endl
			<< "6 - Indexation" << endl
			<< "0 - exit" << endl;
		cout << "Input operation : "; cin >> sw;
		cout << endl;
		switch (sw)
		{
		case 1:
			cout << "Choose strings to concatenate (Input numbers of this strings in array): " << endl;
			int k1, l1;
			cin >> k1;
			cin >> l1;
			Str[k1].Concatenation(Str[l1]);
			Str[k1].printStr();
			cout << endl;
			break;
		case 2:
			cout << "Choose an index of the string: " << endl;
			int k2;
			cin >> k2;
			cout << "Choose a number of symbol in array: " << endl;
			int symbol;
			cin >> symbol;
			cout << Str[k2].getSymbol(symbol) << endl << endl;
			break;
		case 3:
			cout << "Choose indexes of 2 strings to compare: " << endl;
			int k3, l3;
			cin >> k3;
			cin >> l3;
			Str[k3].strCompare(Str[l3]);
			cout << endl;
			break;
		case 4:
			cout << "Sorting by the first symbol: " << endl;
			SortByFirstLetter(Str, n);
			for (int i = 0; i < n; i++) { cout << Str[i].getStr() << endl; }
			cout << endl;
			break;
		case 5:
			cout << "Sorting by the lengths of strings: " << endl;
			SortByLength(Str, n);
			for (int i = 0; i < n; i++) { cout << Str[i].getStr() << endl; }
			cout << endl;
			break;
		case 6:
			cout << "Enter an index of the string: " << endl;
			int k4, l4;
			cin >> k4;
			cout << "Enter an index of the symbol in this string: " << endl;
			cin >> l4;
			cout << Str[k4][l4] << endl;
			break;
		}
	}
		/*
			for (int i = 0;i < n;i++) {
				Str[i].setStrLen();
				Str[i].setStr();
			}
			*/
			/*
			Str[0].strCompare(Str[1]);
			*/

			/*
			Str[0] += Str[1];
			Str[0].printStr();
			*/

			//String Sum;

			//(Str[0] + Str[1]).printStr();
			//Str[0].printStr();
			//Str[0] = Str[1];
			//Sum.printStr();
			//Sum = Str[0];
			//Sum = Str[0] + Str[1];
			//Sum = (Str[0] + Str[1]);
			//Sum.printStr();

			//(Str[1].Concatenation(Str[1])).printStr();
			//cout << Str[0][1];
			//cout << Str[0].getSymbol(1);

			//SortByFirstLetter(Str, n);
			//SortByLength(Str, n);

			/*
			for (int i = 0; i < n; i++) {
				Str[i].printStr();
				cout << endl;
			}
			*/
	delete[] Str;
	return 0;
}
