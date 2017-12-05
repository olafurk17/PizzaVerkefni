#ifndef MANAGEMENTUI_H
#define MANAGEMENTUI_H
#include <iostream>

#include "../models/Workplaces.h"
#include "../models/PizzaMenu.h"
#include "../models/Toppings.h"
#include "../models/Other.h"

using namespace std;


class ManagementUI
{
    public:
        ManagementUI();
        void mainMenu();
        void clear_screen();
        void start_register();

    private:
};

#endif // MANAGMENTUI_H