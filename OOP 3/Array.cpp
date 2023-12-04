#include "Array.h"
#include "ArrayIterator.h"

class ArrayIterator;

Array::Array() : index(0), arr_size(5)
{
    data = new double[5];
}

I_Iterator* Array::begin()
{
    return new ArrayIterator(this, 0);
}

I_Iterator* Array::end() 
{
    return new ArrayIterator(this, index); 
}

bool Array::empty() 
{
    return arr_size == 0;
}

int Array::size()
{
    return arr_size;
}

void Array::push(double value)
{
    if (++index >= arr_size)
    {
        double* new_data = new double[arr_size + 1];
        for (int i = 0; i < arr_size; i++) 
            new_data[i] = data[i];
        delete[] data;
        data = new_data;
        data[index] = value;
        arr_size += 1;
    }
    else
      data[index - 1] = value;
}

void Array::pop()
{
    if (empty()) 
        return;
    for (int i = 1; i <= index; i++) 
        data[i - 1] = data[i];
    index--;
}

Array::~Array()
{
    delete[] data;
}