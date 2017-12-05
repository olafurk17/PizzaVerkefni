#ifndef MANAGEMENTUI_H
#define MANAGEMENTUI_H
#include <iostream>

#include "../models/Workplaces.h"
#include "../models/PizzaMenu.h"
#include "../models/Toppings.h"
#include "../models/Other.h"
#include "ToppingRepo.h"

using namespace std;


class ManagementUI
{
    public:
        ManagementUI();
        void mainMenu();
        void clear_screen();
        void register_location();
        void register_toppings();

    private:
};

#endif // MANAGMENTUI_H
