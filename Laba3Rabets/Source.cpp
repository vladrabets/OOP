#include <iostream>
#include "List.h"
using namespace std;
int main()
{
	List list;
	list.insert(0);
	list.insert(1);
	list.insert(2);
	list.insert(3);
	list.insert(4);
	list.insert(5);
	list.print();
	cout << endl;
//	list.bubbleSort();
//	list.selectSort();
	list.insertSort();
	list.print();

	return 0;
}