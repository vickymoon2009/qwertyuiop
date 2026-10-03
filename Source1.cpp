#include "Pizza.h"

Pizza::Pizza(string name, unsigned short price, unsigned short size)
{
    this->name = name;
    this->price = price;
    this->size = size;
}

string Pizza::getName()
{
    return this->name;
}

unsigned short Pizza::getPrice()
{
    return this->price;
}

unsigned short Pizza::getSize()
{
    return this->size;
}

void Pizza::setName(string name)
{
    this->name = name;
}

void Pizza::setPrice(unsigned short price)
{
    this->price = price;
}

void Pizza::setSize(unsigned short size)
{
    this->size = size;
}
}