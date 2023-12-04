#include "ArrayIterator.h"
#include "Array.h"

class Array;

ArrayIterator::ArrayIterator(Array* array, int index) : array(array), index(index) {}

void ArrayIterator::next()
{
    index++;
}

void ArrayIterator::prev()
{
    index--;
}

void* ArrayIterator::get()
{
    return &array->data[index];
}

bool ArrayIterator::isEqual(I_Iterator* iter)
{
    ArrayIterator* iterator = (ArrayIterator*)iter;
    return iterator != nullptr && index == iterator->index  && array == iterator->array ;
}