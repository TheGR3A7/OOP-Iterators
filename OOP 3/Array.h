#pragma once
#include "I_Iterable.h"

class Array : public I_Iterable 
{
    friend class ArrayIterator;
private:
    double* data;
    int arr_size;
    int index;

public:
    Array();
    virtual I_Iterator* begin() override;
    virtual I_Iterator* end() override;
    virtual bool empty() override;
    virtual int size() override;
    void push(double value);
    void pop();
    ~Array();
};
