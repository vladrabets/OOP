#include "Worker.h"
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int i, N, staj, wag, n=0;
	char pos[30];
	Worker* worker;

	cout << "Input number of workers: "; cin >> N;
	worker = new Worker[N];
	
	for (i = 0; i < N; i++)
	{
		cout << "\nInput name: "; worker[i].setName(); 
		cout << "Input post: "; worker[i].setPost(); 
		cout << "Input working years: "; worker[i].setYear();
		cout << "Input wage($): "; worker[i].setWage();
	}

	cout << "\nWorking years need to be bigger than "; cin >> staj;
	cout << "Workers whose working years are bigger than " << staj << " :\n";
	for (i = 0;i < N;i++)
	{
		worker[i].Staj(staj);
	}

	cout << "\nWage need to be bigger than "; cin >> wag;
	cout << "Workers whose wage are bigger than " << wag << " :\n";
	for (i = 0;i < N; i++)
	{
		worker[i].Wage(staj);
	}

	cout << "\nPost ";	cin >> pos; i = 0;
	cout << "Workers whose post is "; 
	while ((((int(pos[i]) >= 65) && (int(pos[i]) <= 90)) || ((int(pos[i]) >= 97) && (int(pos[i]) <= 122))))
	{
		cout << pos[i];
		i++;
	}
	i = 0;
	cout << " :\n";
	for (i = 0;i < N;i++)
	{
		worker[i].Post(pos);
	}

	/*for (i = 1; i <= N; i++)
	{
		cout << "\nName: "; worker[i].getName();
		cout << "\nPost: "; worker[i].getPost();
		cout << "\nWorking years: "; cout << worker[i].getYear();
		cout << "\nWage: "; cout << worker[i].getWage(); cout << "$";
	}*/

	delete worker;
	return 0;
}