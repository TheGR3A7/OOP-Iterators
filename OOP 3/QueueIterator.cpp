#include <iostream>
#include "QueueIterator.h"
#include "Queue.h"

class Queue;

QueueIterator::QueueIterator(Queue* q, QueueNode* node) : q(q), cur_node(node) {}

void QueueIterator::next()
{
	cur_node = cur_node->next;
}

void QueueIterator::prev()
{
	cur_node = cur_node->prev;
}

void* QueueIterator::get()
{
	return &cur_node->data;
}

bool QueueIterator::isEqual(I_Iterator* iter)
{
	QueueIterator* iterator = (QueueIterator*)iter;
	return iterator != nullptr && q == iterator->q && cur_node == iterator->cur_node;
}