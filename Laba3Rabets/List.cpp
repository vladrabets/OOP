#include"List.h"
#include<iostream>
using namespace std;

List::List()
{
	head = 0;
	end = 0;
}

List::~List()
{
	while (head)
	{
		Node* p = head;
		head = p->next;
		delete p;
	}
}

void List::insert(int value)
{
	Node* node = new Node();
	node->value = value;
	node->next = head;
	head = node;
}


void List::print()
{
	Node* p = head;
	while (p != NULL)
	{
		printf("%d", p->value);
		p = p->next;
	}
}

int List::listLen()
{
	Node* p = head;
	int i = 0;
	while (p->next != NULL)
	{
		p = p->next;
		i++;
	}
	return i + 1;
}

void List::bubbleSort() {
	Node* p = head; 
	int l = this->listLen();
	for (int i = 0; i < l; i++) {
		while (p->next != NULL) {
			if (p->value > p->next->value) {
				int swap = p->next->value;
				p->next->value = p->value;
				p->value = swap;
			}
			p = p->next;
		}
		p = head;
	}
}

void List::selectSort() {
	Node* p = head;
	Node* p0 = head;
	Node* min = NULL;
	int l = this->listLen();
	for (int i = 0; i < l; i++) {
		min = p0;
		p = p0;
		while (p != NULL) {
			if (min->value > p->value) {
				min = p;
			}
			p = p->next;
		}
		
		p = p0;
		int swap = p->value;
		p->value = min->value;
		min->value = swap;
		p0 = p0->next;

	}
}

void List::insertSort() {
	int l = this->listLen();
	Node* key = head;
	Node* p = head;
	Node* temp1 = NULL;
	Node* temp2 = NULL;
	/* 
	for (int j = 0; j < l; j++) {
		p = head;
		key = head;

		/*
		if(j!=0)
		   for (int k = 0; k < j; k++)
		      key = key->next;
			  */

	while (p->next != NULL) {
		
		if (p->next->value > p->value) {
			p = p->next;
		}
		else {
			temp1 = p;
			temp2 = p->next;
			p->next = temp2->next;
			Node* o = head;
			Node* temp3 = o;
			while ((o->next != NULL) && (temp2->value < o->value))
			{
				temp3 = o;
				o = o->next;
			}
			temp3->next = temp2;
			temp2->next = o;
		}
	}

	 //}
}