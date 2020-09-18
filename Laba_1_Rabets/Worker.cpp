#include "Worker.h"
#include <iostream>
#include <string.h>

using namespace std;

Worker::Worker()
{
	year = 0;
	wage = 0;
}

void Worker::Staj(int staj)
{
	int k=0;
	
		if (year > staj) {
			while ((((int(name[k]) >= 65) && (int(name[k]) <= 90)) || ((int(name[k]) >= 97) && (int(name[k]) <= 122))))
			{
				cout << name[k];
				k++;
			}
			cout << "\n";
			k=0;

		}

}
void Worker::Wage(int wag)
{
	int k = 0;

	if (wage > wag) {
		while ((((int(name[k]) >= 65) && (int(name[k]) <= 90)) || ((int(name[k]) >= 97) && (int(name[k]) <= 122))))
		{
			cout << name[k];
			k++;
		}
		cout << "\n";
		k = 0;
	}
}
void Worker::Post(char pos[30])
{
	int k = 0, s = 0, l = 0;
	while ((((int(pos[k]) >= 65) && (int(pos[k]) <= 90)) || ((int(pos[k]) >= 97) && (int(pos[k]) <= 122))))
	{
		if (pos[k] != post[k])
			s++;
		k++;
	}
	if (s == 0)
		while ((((int(name[l]) >= 65) && (int(name[l]) <= 90)) || ((int(name[l]) >= 97) && (int(name[l]) <= 122))))
		{
			cout << name[l];
			l++;
		}
	cout << "\n";
}

void Worker::getName()
{
	int k=0;
	while ((((int(name[k]) >= 65) && (int(name[k]) <= 90)) || ((int(name[k]) >= 97) && (int(name[k]) <= 122))))
	{
		cout << name[k];
		k++;
	}
}
void Worker::getPost()
{
	int k=0;
	while ((((int(name[k]) >= 65) && (int(name[k]) <= 90)) || ((int(name[k]) >= 97) && (int(name[k]) <= 122))))
	{
		cout << post[k];
		k++;
	}
}
int Worker::getYear()
{
	return year;
}
int Worker::getWage()
{
	return wage;
}

void Worker::setName()
{
	cin >> name;
}
void Worker::setPost()
{
	cin >> post;
}
void Worker::setYear()
{
	cin >> year;
}
void Worker::setWage()
{
	cin >> wage;
}