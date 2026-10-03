#pragma once
#include <iostream>
using namespace std;

class Pizza
{
private:
    string name;
    unsigned short price;
    unsigned short size;

public:
    Pizza() = default;
    Pizza(string name, unsigned short price, unsigned short size);

    string getName();
    unsigned short getPrice();
    unsigned short getSize();

    void setName(string name);
    void setPrice(unsigned short price);
    void setSize(unsigned short size);
};