#include "LinkedList.h"
/*


LinkedList::LinkedList()
{
}


LinkedList::~LinkedList()
{
}
*/


LinkedList::LinkedList() {
	this->length = 0;
	this->head = NULL;
	this->back = NULL;
}

LinkedList::~LinkedList() {
	/*while (head) {
		std::cout << i << ": " << head->data << std::endl;
		head = head->next;
		i++;
	}*/
	
}

void LinkedList::addElement(PlayingCard *data)
{
	Node* node = new Node();
	node->data = data;
	node->next = this->head;
	this->head = node;
	this->length++;
}

void LinkedList::getElements() {
	Node* head = this->head;
	int i = 1;
	while (head) {
		std::cout << i << ": " << head->data->getName() << std::endl;
		head = head->next;
		i++;
	}
}