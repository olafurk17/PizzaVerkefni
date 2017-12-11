#ifndef PIZZAMENUREPO_H
#define PIZZAMENUREPO_H

#include <iostream>
#include <fstream>
#include <vector>
#include "../models/PizzaMenu.h"

using namespace std;


class PizzaMenuRepo
{
    public:
        PizzaMenuRepo();
        void print();
        void save(PizzaMenu& pizza);

    private:
        PizzaMenu menu;
};

#endif // PIZZAMENUREPO_H
