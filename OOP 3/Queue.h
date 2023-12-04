#pragma once
#include "I_Iterable.h"
#include "QueueNode.h"

class QueueNode;

class Queue : public I_Iterable 
{
private:
    QueueNode* first;
    QueueNode* last;
    int q_size;

public:
    Queue();
    virtual I_Iterator* begin() override;
    virtual I_Iterator* end() override;
    virtual bool empty() override;
    virtual int size() override;
    void push(double value);
    void pop();
    ~Queue();
};

