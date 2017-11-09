#pragma once
#include "PlayingCard.h"
/*class LinkedList
{
public:
	LinkedList();
	~LinkedList();
};*/

#include <iostream>
#include <cstdlib>

using namespace std;

class LinkedList
{
private:
	class Node
	{
	public:
		Node* next;
		Node* previous;
		PlayingCard *data;
	};
public:
	int length;
	Node* head;
	Node* back;

	LinkedList();
	~LinkedList();
	void addElement(PlayingCard *data);
	void getElements();
};

/*
int main(int argc, char const *argv[])
{
	LinkedList* list = new LinkedList();
	for (int i = 0; i < 100; ++i)
	{
		list->add(rand() % 100);
	}
	list->print();
	std::cout << "List Length: " << list->length << std::endl;
	delete list;
	return 0;
}*/