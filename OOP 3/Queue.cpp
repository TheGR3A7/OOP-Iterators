#include <iostream>
#include "Queue.h"
#include "QueueIterator.h"


Queue::Queue() : first(nullptr), last(nullptr), q_size(5) 
{
}

I_Iterator* Queue::begin() 
{
	return new QueueIterator(this, first);
}

I_Iterator* Queue::end()
{
	return new QueueIterator(this, nullptr);
}

bool Queue::empty() 
{
	return q_size == 0;
}

int Queue::size()
{
	return q_size;
}


void Queue::push(double value)
{
	QueueNode* newNode = new QueueNode(value);
	if (last == nullptr) 
	{
		first = newNode;
		last = newNode;
	}
	else
	{
		last->next = newNode;
		newNode->prev = last;
		last = newNode;
	}
	q_size++;
}

void Queue::pop()
{
	if (first != nullptr) 
	{
		QueueNode* temp = first;
		first = first->next;
		if (first != nullptr)
			first->prev = nullptr;
		else 
			last = nullptr;
		delete temp;
		q_size--;
	}
}

Queue::~Queue()
{
	QueueNode* current = first;
	while (current != nullptr)
	{
		QueueNode* next = current->next;
		delete current;
		current = next; 
	}
}