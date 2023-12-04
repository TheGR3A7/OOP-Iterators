#pragma once

class QueueNode
{
public:
	double data;
	QueueNode(double value);
	QueueNode* next;
	QueueNode* prev;
};