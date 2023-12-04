#pragma once
#include "I_Iterator.h"

class I_Iterable 
{
public:
    virtual I_Iterator* begin() = 0;
    virtual I_Iterator* end() = 0;
    virtual bool empty() = 0;
    virtual int size() = 0;
};