#ifndef SALESUI_H
#define SALESUI_H

#include <iostream>

#include "../models/Toppings.h"
#include "../models/PizzaMenu.h"
#include "../models/Workplaces.h"
#include "../models/Other.h"

using namespace std;


class SalesUI
{
    public:
        SalesUI();
        void sales();
        void clear_screen();
        void new_order();

    private:
};

#endif // SALESUI_H
