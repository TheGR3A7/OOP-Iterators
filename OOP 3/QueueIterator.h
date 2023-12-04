#pragma once
#include "I_Iterator.h"
#include "Queue.h"

class QueueIterator : public I_Iterator 
{
private:
	Queue* q;
	QueueNode* cur_node;
public:
	QueueIterator(Queue* q, QueueNode* node);
	virtual void next() override;
	virtual void prev() override;
	virtual void* get() override;
	virtual bool isEqual(I_Iterator* iter) override;
};