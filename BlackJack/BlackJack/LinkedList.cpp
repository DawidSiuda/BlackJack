#include "LinkedList.h"

LinkedList::LinkedList() {
	this->length = 0;
	this->head = NULL;
	this->back = NULL;
}

LinkedList::~LinkedList() {
	while (head) {
		
		Node* temp = head;
		head = head->next;
		delete temp;
	}
	
}

void LinkedList::addElement(PlayingCard *data)
{
	Node* node = new Node();
	node->data = data;
	
	if (length == 0)
	{
		node->next = NULL;
		node->previous = NULL;
		head = node;
		back = node;
	}
	else
	{
		
		node->next= back;
		node->previous= NULL;
		back->previous = node;
		back = node;
	}
	this->length++;
	/*
		std::cout << "head -->"<< head->data->getName() << std::endl
			<<"Back -->" << back->data->getName() << std::endl
			<< "curent next -->" << node->next->data->getName() << std::endl
			<< "curent current -->" << node->data->getName() << std::endl
			<< "curent prweius -->" << node->previous->data->getName() << std::endl
		<<std::endl;
	*/
	
}

bool LinkedList::delElement(int index)
{
	if (index >= length)
	{
		std::cout << "ERROR::function \"delCard(int)\" from linkedList got bad argument" << std::endl;
		return false;
	}

	Node* head = this->back;
	for (int i = 0; i<length; i++)
	{
		head = head->next;
	}
	//cout << head << endl;
	/*Node* editor;// = temp->previous;
	
	if (head->next != NULL)
	{
		editor = head->next;
		editor->previous = head->previous;
	}
	

	if (head->previous != NULL)
	{
		editor = head->previous;
		editor->next = head->next;
	}

	//delete head;
	*/

	
	length--;
	return true;
}

void LinkedList::getElements(bool getOnConsole) 
{
	if (getOnConsole == true)
	{
		Node* head = this->back;
		int i = 1;
		while (head) 
		{
			std::cout << i << ": " << head->data->getName() << std::endl;
			head = head->next;
			i++;
		}
	}
}

PlayingCard LinkedList::getCard(int numberOfCard)
{

	if(numberOfCard >= length)
	{
		numberOfCard -= length;
		std::cout << "ERROR::function getCard(int) from linkedList got bad argument"<<std::endl;
		int errorCode = 1;
		throw errorCode;
	}

	Node* current = this->head;
	for(int i =0; i<numberOfCard; i++)
	{
		current = current->previous;
	}
	//std::cout << length<< std::endl;

	return *current->data;
}

unsigned int LinkedList::getLength(bool onConsole)
{
	if (onConsole == true)
		std::cout << "--> In linkedList is/are " << length << " element/s" << std::endl;

	return length;
}
