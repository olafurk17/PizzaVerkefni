#ifndef TOPPINGREPO_H
#define TOPPINGREPO_H
#include <string>
#include <istream>
#include <iostream>
#include <fstream>
#include "../models/Toppings.h"
#include "../models/Workplaces.h"

using namespace std;

class ToppingRepo
{
    public:
        ToppingRepo();
        void save(Toppings& toppings);
        void print();

    private:
        workplaces work;
//        Toppings toppings("h");

};

#endif // TOPPINGREPO_H
