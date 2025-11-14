#include <iostream>
#include "HeapInt.hpp"

HeapInt::HeapInt()
{
    *(this->intptr) = 0;
}

HeapInt::HeapInt(int num)
{
    *(this->intptr) = num;
}


HeapInt::HeapInt(const HeapInt &ponteiro)
{
    
    *(this->intptr) = *(ponteiro.intptr);
}

HeapInt::~HeapInt()
{
    delete this->intptr;
}
    

HeapInt& HeapInt::operator = (const HeapInt& num_ptr)
{
    
    if (this != &num_ptr)
    {
        *(this->intptr) = *(num_ptr.intptr);
    }
    return *this;
}


HeapInt& HeapInt::operator = (int num)
{
    *(this->intptr) = num;
    return *this;
}


HeapInt HeapInt::operator + (const HeapInt& num_ptr) const
{
    
    int new_val = *(this->intptr) + *(num_ptr.intptr);
    return HeapInt(new_val);
}


HeapInt HeapInt::operator - (const HeapInt& num_ptr) const
{
    
    int new_val = *(this->intptr) - *(num_ptr.intptr);
    return HeapInt(new_val);
}


bool HeapInt::operator == (const HeapInt& num_ptr) const
{
    return (*(this->intptr) == *(num_ptr.intptr));
}