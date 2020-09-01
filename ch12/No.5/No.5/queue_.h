#pragma once
#include <iostream>
#include "Customer.h"
typedef Customer Item;

struct Node {
	Item item;
	Node * next;
};

class queue_
{
private:
	enum {Q_SIZE = 10};
	int items;
	const int qsize;
	Node *head;
	Node *tail;
	queue_(const queue_ &q):qsize(0) {};
	queue_ &operator=(const queue_ &q) { return *this; };
public:
	queue_(int qs = Q_SIZE);
	~queue_();

	bool isempty() const;
	bool isfull() const;
	int queuecount() const { return items; };

	bool enqueue(const Item &item);
	bool dequeue(Item &item);
};

