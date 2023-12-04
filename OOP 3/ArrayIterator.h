#pragma once
#include "I_Iterator.h"

class Array;

class ArrayIterator : public I_Iterator
{
    friend class Array;
private:
    Array* array;
    int index;

public:
    ArrayIterator(Array* array, int index);
    virtual void next() override;
    virtual void prev() override;
    virtual void* get() override;
    virtual bool isEqual(I_Iterator* iter) override;
};