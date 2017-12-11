#ifndef MANAGEMENTUI_H
#define MANAGEMENTUI_H
#include <iostream>

#include "../models/Workplaces.h"
#include "../models/Toppings.h"
#include "../models/Other.h"
#include "PizzaMenuService.h"
#include "OtherService.h"



using namespace std;


class ManagementUI
{
    public:
        ManagementUI();
        void mainMenu();
        void clear_screen();
        void registerLocation();
        void regesterPizza(PizzaMenu& pizza);
        void Menu();
        void registerOther(Other& other);

    private:
        PizzaMenu menu;
        PizzaMenuService service;
        OtherService otherservice;
};

#endif // MANAGMENTUI_H
