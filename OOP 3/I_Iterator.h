#pragma once

class I_Iterator 
{
public:
    virtual void next() = 0;
    virtual void prev() = 0;
    virtual void* get() = 0;
    virtual bool isEqual(I_Iterator* iter) = 0;
};
