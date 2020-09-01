#include "queue_.h"



queue_::queue_(int qs): qsize(qs)
{
	head = tail = nullptr;
	items = 0;
}


queue_::~queue_()
{
	Node *temp = new Node;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
}

bool queue_::isempty() const
{
	if (items == 0)
		return true;
	return false;
}

bool queue_::isfull() const
{
	if (items == qsize)
		return true;
	return false;
}

bool queue_::enqueue(const Item & item)
{
	if (isfull())
		return false;

	Node *add = new Node;
	add->item = item;
	add->next = nullptr;
	if (isempty())
		head = add;
	else
		tail->next = add;
	tail = add;
	items++;
	return true;
}

bool queue_::dequeue(Item & item)
{
	if (isempty())
		return false;
	item = head->item;
	Node * temp = head;
	head = head->next;
	delete temp;
	items--;
	if (isempty())
		tail = nullptr;
	return true;
}
