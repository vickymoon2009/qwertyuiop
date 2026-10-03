#include "Pizza.h"

Pizza* searchByPrice(Pizza* order, unsigned int size, unsigned int price)
{
    for (int i = 0; i < size; i++)
    {
        if (order[i].getPrice() == price)
        {
            return &order[i];
        }
    }

    return nullptr;
}

Pizza* searchByName(Pizza* order, unsigned int size, string name)
{
    for (int i = 0; i < size; i++)
    {
        if (order[i].getName() == name)
        {
            return &order[i];
        }
    }

    return nullptr;
}

int main()
{
    setlocale(LC_ALL, "");

    cout << "========== Linear Search (Pizza Project)! ==========\n";

    unsigned int const SIZE = 3;

    Pizza order[SIZE] =
    {
        {"cheese4", 200, 34},
        {"margarita", 190, 26},
        {"peperroni", 300, 40}
    };ю
    Pizza* pizza = searchByPrice(order, SIZE, 200);

    if (pizza != nullptr)
    {
        cout << "Pizza found by price: ";
        cout << pizza->getName() << endl;
    }
    Pizza* pizzaByName = searchByName(order, SIZE, "margarita");

    if (pizzaByName != nullptr)
    {
        cout << "Pizza found by name: ";
        cout << pizzaByName->getName() << endl;
    }
    else
    {
        cout << "Pizza not found!" << endl;
    }

    return 0;
}